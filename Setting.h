#pragma once

#include "Includes.h"
#include"imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"
typedef struct
{
	DWORD R;
	DWORD G;
	DWORD B;
	DWORD A;
}RGBA;
namespace weapon {

	extern ImVec4	MG3;
	extern ImVec4	FAMAS;
	extern ImVec4	Mk14;
	extern ImVec4	G36;
	extern ImVec4	AN94;
	extern ImVec4 m16;
	extern ImVec4 AKM;
	extern ImVec4 AWM;
	extern ImVec4 AWMimmo;
	extern ImVec4 scarl;
	extern ImVec4 m762;
	extern ImVec4 M24;
	extern ImVec4  GROZZA;
	extern ImVec4 scope8x;
	extern ImVec4 kar98;
	extern ImVec4  Airdrop;
	extern ImVec4 Flare;
	extern ImVec4 Flaregun;
}

namespace Colors {

	extern ImVec4  dp;
	extern ImVec4  mg3;
	extern ImVec4  scope4x;
	extern ImVec4  scope3x;
	extern	ImVec4  bag;
	extern	ImVec4  armer;
	extern	ImVec4  helmat;
	extern	ImVec4  mosin;
	extern ImVec4  aug;
	extern ImVec4  g36;
	extern ImVec4  assm;

	extern	ImVec4  Grandes;
	extern	ImVec4  ammo7;
	extern	ImVec4  ammo5;
	extern ImVec4  madkit;

	/////////////////////////
	extern ImVec4 itemcolors;
	// ARGB playr
	extern	ImVec4  playerline;
	extern	ImVec4  playercorner;
	extern	ImVec4  playerbox;
	extern	ImVec4  lotbox;
	// ARGB
	extern ImVec4  helthbar;
	extern ImVec4  boxColor;
	extern ImVec4  cornerColor;
	extern ImVec4  crosshairColor;
	extern	ImVec4  bot;
	extern	ImVec4  botbone;
	extern	ImVec4  skelec;
	extern	ImVec4  playerbone;
	extern	ImVec4  player;
	extern ImVec4  vehicle;


	extern	ImVec4  magiclinevvisile;


	//RGB
	extern ImVec4  botcorner;
	extern ImVec4  botline;
	extern	ImVec4 circle;
	extern	ImVec4  enemy;
	extern	ImVec4  botbox;
	extern	ImVec4  bone;
	extern	 ImVec4  fillrect;
	extern	 ImVec4  nam;
	extern	 ImVec4  nambar;
	extern	 ImVec4  bothealth;
	extern	ImVec4  botname;
	extern	ImVec4  playerhealth;
	extern	ImVec4  textcolor;
	extern	 ImVec4  Cweapon;


	extern	ImVec4 Granades;
	extern	ImVec4 health;
	extern	ImVec4 deadbox;
	extern	ImVec4 deadboxitem;
	extern	ImVec4 airdrop;
	extern	ImVec4 airdropitem;
	extern	ImVec4 scopetextcolor;
	extern	ImVec4  allitem;
	extern	ImVec4  scope6x;
	extern	ImVec4  magicline;
	extern	ImVec4  bgcorner;
	extern	ImVec4  fovcirclecolor;
	extern	ImVec4 M249;
	extern	ImVec4 MK12;
	extern	ImVec4 hpt;
}

namespace Setting
{
	///SAVE COLOR///
	extern RGBA LEsp_Item_AKM_Color;
	extern RGBA LEsp_Item_M762_Color;
	extern RGBA LEsp_Item_Mk47Mutant_Color;
	extern RGBA LEsp_Item_DP28_Color;
	extern RGBA LEsp_Item_SCARL_Color;
	extern RGBA LEsp_Item_M416_Color;
	extern RGBA LEsp_Item_M16A4_Color;
	extern RGBA LEsp_Item_QBZ_Color;
	extern RGBA LEsp_Item_QBU_Color;
	extern RGBA LEsp_Item_SLR_Color;
	extern RGBA LEsp_Item_SKS_Color;
	extern RGBA LEsp_Item_Mini14_Color;
	extern RGBA LEsp_Item_M24_Color;
	extern RGBA LEsp_Item_Kar98k_Color;
	extern RGBA LEsp_Item_PP19_Color;
	extern RGBA LEsp_Item_TommyGun_Color;
	extern RGBA LEsp_Item_MP5K_Color;
	extern RGBA LEsp_Item_UMP9_Color;
	extern RGBA LEsp_Item_Vector_Color;
	extern RGBA LEsp_Item_Uzi_Color;
	extern RGBA LEsp_Item_762mm_Color;
	extern RGBA LEsp_Item_556mm_Color;
	extern RGBA LEsp_Item_9mm_Color;
	extern RGBA LEsp_Item_45ACP_Color;
	extern RGBA LEsp_Item_Holo_Color;
	extern RGBA LEsp_Item_x2_Color;
	extern RGBA LEsp_Item_x3_Color;
	extern RGBA LEsp_Item_AirDrop_Color;
	extern RGBA LEsp_Item_x4_Color;
	extern RGBA LEsp_Item_x6_Color;
	extern RGBA LEsp_Item_x8_Color;
	extern RGBA LEsp_Item_Bag1_Color;
	extern RGBA LEsp_Item_Bag2_Color;
	extern RGBA LEsp_Item_Bag3_Color;
	extern RGBA LEsp_Item_Armor1_Color;
	extern RGBA LEsp_Item_Armor2_Color;
	extern RGBA LEsp_Item_Armor3_Color;
	extern RGBA LEsp_Item_Helmet1_Color;
	extern RGBA LEsp_Item_Helmet2_Color;
	extern RGBA LEsp_Item_Helmet3_Color;
	extern RGBA LEsp_Item_Frag_Color;
	extern RGBA LEsp_Item_Smoke_Color;
	extern RGBA LEsp_Item_Molotof_Color;
	extern RGBA LEsp_Item_MedKit_Color;
	extern RGBA LEsp_Item_FirstAidKit_Color;
	extern RGBA LEsp_Item_Painkiller_Color;
	extern RGBA LEsp_Item_EnergyDrink_Color;
	extern RGBA LEsp_Item_AdrenalineSyringe_Color;
	extern RGBA LEsp_Item_FlareGun_Color;
	extern RGBA LEsp_Item_Flare_Color;
	extern RGBA LEsp_Item_AirDrop_Color;
	///SAVE weapon///
	extern RGBA LGolden;
	extern RGBA LAKM;
	extern RGBA LAWM;
	extern RGBA LDBS;
	extern RGBA LAWMimmo;
	extern RGBA LAirAttack;
	extern RGBA Lscarl;
	extern RGBA Lm762;
	extern RGBA LM24;
	extern RGBA LGROZZA;
	extern RGBA Lscope8x;
	extern RGBA Lkar98;
	extern RGBA LAirdrop;
	extern RGBA LFlare;
	extern RGBA LFlaregun;
	///COLOR///
	extern RGBA Lbotcorner;
	extern RGBA Lbotline;
	extern RGBA Lfalg;
	extern RGBA Lenemy;
	extern RGBA Lbone;
	extern RGBA Lfillrect;
	extern RGBA Lnam;
	extern RGBA Lnambar;
	extern RGBA Lbothealth;
	extern RGBA Lbotname;
	extern RGBA Lplayerhealth;
	extern RGBA Ltextcolor;
	extern RGBA Lhelthbar;
	extern RGBA LboxColor;
	extern RGBA LcornerColor;
	extern RGBA LcrosshairColor;
	extern RGBA Lbot;
	extern RGBA Llotbox;
	extern RGBA LBotlinescolors;
	extern RGBA LBONEHEADcolors;
	extern RGBA Lplayerline;
	extern RGBA Lplayercorner;
	extern RGBA Lplayerbox;
	extern RGBA Lbotbone;
	extern RGBA Lskelec;
	extern RGBA Lplayerbone;
	extern RGBA Lplayer;
	extern RGBA Lvehicle;
	extern RGBA Ldp;
	extern RGBA Lmg3;
	extern RGBA Lscope4x;
	extern RGBA Lscope3x;
	extern RGBA Lbag;
	extern RGBA Larmer;
	extern RGBA Lhelmat;
	extern RGBA Lmosin;
	extern RGBA Laug;
	extern RGBA Lg36;
	extern RGBA Lassm;
	extern RGBA Lbotbox;
	extern RGBA Lcircle;
	extern RGBA LGrandes;
	extern RGBA Lammo7;
	extern RGBA Lammo5;
	extern RGBA Lmadkit;
	extern RGBA Lscope6x;
	extern RGBA Lmagicline;
	extern RGBA Lbgcorner;
	extern RGBA Lfovcirclecolor;
	extern RGBA LM249;
	extern RGBA LMK12;
	extern RGBA Lhpt;
	extern RGBA Lairdrop;
	extern RGBA Ldeadbox;
	extern RGBA LGranades;
	extern RGBA Lhealth;
	extern RGBA Ldeadboxitem;
	extern RGBA Lairdropitem;
	extern RGBA Lscopetextcolor;
	extern RGBA Lallitem;
	extern RGBA Lm16;
	extern RGBA LEsp_Item_G36C_Color;
	extern RGBA Lplancolor;
	extern RGBA Ldotss;
	extern RGBA LFAMAS;
	extern RGBA LAN94;
	extern RGBA LVSS;
	extern RGBA LWin94;
	extern RGBA LS12K;
	extern RGBA LS686;
	extern RGBA LS1897;
	extern RGBA LSawedOff;
	extern RGBA LM1014;
	extern RGBA LP90;
	extern RGBA LRedDot;
	extern RGBA LCrossBow;
	extern RGBA LR1895;
	extern RGBA LVz61;
	extern RGBA LP92;
	extern RGBA LP18C;
	extern RGBA LR45;
	extern RGBA LP1911;
	extern RGBA LDesertEagle;
	extern RGBA La12Guagemm;
	extern RGBA LBoltmm;
	///SAVE COLOR///
	extern float warning;
	extern bool BESP;
	extern bool antiscreen;
	extern bool PESP;
	extern int Fightmodekey;
	extern bool differnt;
	extern bool same;
	extern bool MemoryAimbot;
	extern bool AimPrediction;
	extern bool AimbotwithMagic;
	extern bool MagicInsideFOV;
	extern bool Magic360deg;
	extern float overlaycolor;
	extern float Namesize;
	extern float Dissize;
	extern float weaponsize;
	extern int	MG3;
	extern bool zeroheadshot;
	extern int MagicBulletKey;
	extern bool GodView;
	extern int EnableKeyf;
	extern int FAMAS;
	extern int	Mk14;
	extern bool	G36;
	extern int	AN94;

	extern bool knocked;
	extern int EnableKey;
	extern int AimbotKey;
	extern int fastrunkey;
	extern int PositionKey;
	extern int intGO;
	extern	bool dots;
	extern bool SkipBots;
	extern	bool bg;
	extern int  redioption;
	extern bool  redioption2;
	extern	bool IsMagicInitialize;
	extern bool Redzome;
	extern int AirAttack;
	extern FLOAT Aimspeed;
	extern float fovcircleredus;
	extern bool aimbotposition;
	extern bool fovcircle;
	extern ImVec4 colorcode;
	extern bool Magntic;
	extern bool Magntica;
	extern int	curraim;
	extern bool	engine;
	extern bool	skele;
	extern bool MAgicline;
	extern char filename[];
	extern float Normalfontsize;
	extern float fontsize;
	extern float plinesize;
	extern float pfullboxsize;
	extern float pcornersize;
	extern float pbonesize;

	extern bool plr_wpn;

	extern float blinesize;
	extern float bfullboxsize;
	extern float bcornersize;
	extern float bbonesize;
	extern bool silent;
	extern bool bortext;
	extern bool ShowMenu2;
	extern bool MagicBulletticked;

	extern bool style1;
	extern bool style2;
	extern bool ShowMenu;
	extern bool profree;
	extern	bool botname, bothealth, botline, botfullbox, botblood, botcorner;
	//playr
	extern	bool pline, phealth, pfullbox, pname, pblood, pcorner, deadbox, Flag, Flag1, Flag3;
	extern bool fightmode;
	extern bool Name;
	extern bool Distance;
	extern bool weaponenemy;
	extern bool Distancee;
	extern bool TotalEnemy;
	extern bool Line;
	extern bool Box;
	extern bool botBone;
	extern bool playerBone;
	extern bool  Bone;
	extern bool Health;
	extern bool BombAlert;
	extern bool Item;
	extern bool Vehicle;


	extern bool weapon;

	extern bool impitems;
	extern bool graned;
	extern bool healthitem;
	extern bool scope;
	extern bool allitemss;
	extern bool FlagText;
	extern bool Flagimge;
	extern bool Flags;

	extern bool instanthit;
	extern bool fastrun;
	extern bool fly;
	extern bool carfly;
	extern bool speedcar;
	extern bool recoil;
	extern bool fastrun2;
	extern bool fastland;
	extern bool NoSpread;
	extern bool FastSwitchWeapon;
	extern bool RapidFireG;
	extern bool NoGravity;
	extern bool nightmode;
	extern bool nograss;
	extern bool blackbody;
	extern bool blacksky;
	extern bool Quickloot;
	extern bool godviewfront;
	extern bool PlayerAiming;

	extern bool fastrun3;
	extern bool fastrun4;
	extern bool godview;
	extern bool disablemc;
	extern bool vehicletele;
	extern bool godview;

	extern bool modskin;

	//pangy
	extern bool sortitem;
	extern bool aimwarning;



	extern bool airdrop;
	extern bool airdropitem;
	extern bool playerdeadbox;
	extern bool itemrect;
	extern bool Bags;
	extern bool Helmat;
	extern bool Armer;

	extern	bool Esp_Item_M249;

	extern	bool Esp_Item_Mk12;

	extern bool MagicX;
	extern bool plan;
	extern ImVec4 plancolor;
	extern ImVec4 dotss;
	extern bool vahicle_item;
	extern bool Esp_Item_AKM;
	extern float Esp_Item_AKM_Color[4];
	extern float Esp_Item_AKM_TextSize;

	extern bool Esp_Item_M762;
	extern float Esp_Item_M762_Color[4];
	extern float Esp_Item_M762_TextSize;

	extern bool Esp_Item_Mk47Mutant;
	extern float Esp_Item_Mk47Mutant_Color[4];
	extern float Esp_Item_Mk47Mutant_TextSize;

	extern bool Esp_Item_DP28;
	extern float Esp_Item_DP28_Color[4];
	extern float Esp_Item_DP28_TextSize;

	extern bool Esp_Item_SCARL;
	extern float Esp_Item_SCARL_Color[4];
	extern float Esp_Item_SCARL_TextSize;

	extern bool Esp_Item_M416;
	extern float Esp_Item_M416_Color[4];
	extern float Esp_Item_M416_TextSize;

	extern bool Esp_Item_M16A4;
	extern float Esp_Item_M16A4_Color[4];
	extern float Esp_Item_M16A4_TextSize;

	extern bool Esp_Item_G36C;
	extern float Esp_Item_G36C_Color[4];
	extern float Esp_Item_G36C_TextSize;

	extern bool Esp_Item_QBZ;
	extern float Esp_Item_QBZ_Color[4];
	extern float Esp_Item_QBZ_TextSize;

	extern bool Esp_Item_QBU;
	extern float Esp_Item_QBU_Color[4];
	extern float Esp_Item_QBU_TextSize;
	extern int hp1;
	extern int nsize;
	extern int dissize;
	extern bool hp;
	extern bool feul;
	extern int vehisize;
	extern bool Esp_Item_SLR;
	extern float Esp_Item_SLR_Color[4];
	extern float Esp_Item_SLR_TextSize;

	extern bool Esp_Item_SKS;
	extern float Esp_Item_SKS_Color[4];
	extern float Esp_Item_SKS_TextSize;

	extern bool Esp_Item_Mini14;
	extern float Esp_Item_Mini14_Color[4];
	extern float Esp_Item_Mini14_TextSize;

	extern bool Esp_Item_M24;
	extern float Esp_Item_M24_Color[4];
	extern float Esp_Item_M24_TextSize;
	extern bool Esp_Item_Awm;
	extern bool Esp_Item_Awmimo;
	extern bool Esp_Item_Kar98k;
	extern float Esp_Item_Kar98k_Color[4];
	extern float Esp_Item_Kar98k_TextSize;

	extern bool Esp_Item_PP19;
	extern float Esp_Item_PP19_Color[4];
	extern float Esp_Item_PP19_TextSize;

	extern bool Esp_Item_TommyGun;
	extern float Esp_Item_TommyGun_Color[4];
	extern float Esp_Item_TommyGun_TextSize;

	extern bool Esp_Item_MP5K;
	extern float Esp_Item_MP5K_Color[4];
	extern float Esp_Item_MP5K_TextSize;

	extern bool Esp_Item_UMP9;
	extern float Esp_Item_UMP9_Color[4];
	extern float Esp_Item_UMP9_TextSize;

	extern bool Esp_Item_Vector;
	extern float Esp_Item_Vector_Color[4];
	extern float Esp_Item_Vector_TextSize;

	extern bool Esp_Item_Uzi;
	extern float Esp_Item_Uzi_Color[4];
	extern float Esp_Item_Uzi_TextSize;

	extern bool Esp_Item_762mm;
	extern float Esp_Item_762mm_Color[4];
	extern float Esp_Item_762mm_TextSize;

	extern bool Esp_Item_556mm;
	extern float Esp_Item_556mm_Color[4];
	extern float Esp_Item_556mm_TextSize;

	extern bool Esp_Item_9mm;
	extern float Esp_Item_9mm_Color[4];
	extern float Esp_Item_9mm_TextSize;

	extern bool Esp_Item_45ACP;
	extern float Esp_Item_45ACP_Color[4];
	extern float Esp_Item_45ACP_TextSize;

	extern bool Esp_Item_Holo;
	extern float Esp_Item_Holo_Color[4];
	extern float Esp_Item_Holo_TextSize;

	extern bool Esp_Item_x2;
	extern float Esp_Item_x2_Color[4];
	extern float Esp_Item_x2_TextSize;

	extern bool Esp_Item_x3;
	extern float Esp_Item_x3_Color[4];
	extern float Esp_Item_x3_TextSize;

	extern bool Esp_Item_x4;
	extern float Esp_Item_x4_Color[4];
	extern float Esp_Item_x4_TextSize;

	extern bool Esp_Item_x6;
	extern float Esp_Item_x6_Color[4];
	extern float Esp_Item_x6_TextSize;

	extern bool Esp_Item_x8;
	extern float Esp_Item_x8_Color[4];
	extern float Esp_Item_x8_TextSize;

	extern bool Esp_Item_Bag1;
	extern float Esp_Item_Bag1_Color[4];
	extern float Esp_Item_Bag1_TextSize;

	extern bool Esp_Item_Bag2;
	extern float Esp_Item_Bag2_Color[4];
	extern float Esp_Item_Bag2_TextSize;

	extern bool Esp_Item_Bag3;
	extern float Esp_Item_Bag3_Color[4];
	extern float Esp_Item_Bag3_TextSize;

	extern bool Esp_Item_Armor1;
	extern float Esp_Item_Armor1_Color[4];
	extern float Esp_Item_Armor1_TextSize;

	extern bool Esp_Item_Armor2;
	extern float Esp_Item_Armor2_Color[4];
	extern float Esp_Item_Armor2_TextSize;

	extern bool Esp_Item_Armor3;
	extern float Esp_Item_Armor3_Color[4];
	extern float Esp_Item_Armor3_TextSize;

	extern bool Esp_Item_Helmet1;
	extern float Esp_Item_Helmet1_Color[4];
	extern float Esp_Item_Helmet1_TextSize;

	extern bool Esp_Item_Helmet2;
	extern float Esp_Item_Helmet2_Color[4];
	extern float Esp_Item_Helmet2_TextSize;

	extern bool Esp_Item_Helmet3;
	extern float Esp_Item_Helmet3_Color[4];
	extern float Esp_Item_Helmet3_TextSize;

	extern bool Esp_Item_Frag;
	extern float Esp_Item_Frag_Color[4];
	extern float Esp_Item_Frag_TextSize;

	extern bool Esp_Item_Smoke;
	extern float Esp_Item_Smoke_Color[4];
	extern float Esp_Item_Smoke_TextSize;

	extern bool Esp_Item_Molotof;
	extern float Esp_Item_Molotof_Color[4];
	extern float Esp_Item_Molotof_TextSize;

	extern bool Esp_Item_MedKit;
	extern float Esp_Item_MedKit_Color[4];
	extern float Esp_Item_MedKit_TextSize;

	extern bool Esp_Item_FirstAidKit;
	extern float Esp_Item_FirstAidKit_Color[4];
	extern float Esp_Item_FirstAidKit_TextSize;

	extern bool Esp_Item_Painkiller;
	extern float Esp_Item_Painkiller_Color[4];
	extern float Esp_Item_Painkiller_TextSize;

	extern bool Esp_Item_EnergyDrink;
	extern float Esp_Item_EnergyDrink_Color[4];
	extern float Esp_Item_EnergyDrink_TextSize;

	extern bool Esp_Item_AdrenalineSyringe;
	extern float Esp_Item_AdrenalineSyringe_Color[4];
	extern float Esp_Item_AdrenalineSyringe_TextSize;

	extern bool Esp_Item_FlareGun;
	extern float Esp_Item_FlareGun_Color[4];
	extern float Esp_Item_FlareGun_TextSize;

	extern bool Esp_Item_Flare;
	extern float Esp_Item_Flare_Color[4];
	extern float Esp_Item_Flare_TextSize;

	extern bool Esp_Item_AirDrop;
	extern float Esp_Item_AirDrop_Color[4];
	extern float Esp_Item_AirDrop_TextSize;

	extern bool Aimbot;

	extern bool MagicBullet;
	

	extern bool borderlo;

	extern bool CameraCatch;

	/*extern bool hp;
	extern bool feul;*/
	extern bool GodView1;
	extern bool IpadView;
	extern bool loofyOn;
	extern bool loofy;
	extern bool Parachute;


	extern int GODVIEWUP;

	extern bool grw;
	extern bool molow;
	//extern float hpt;
	extern int	magicv;
	extern int	flycarv;
	extern int	instantv;
	extern int GodLeft;
	extern int GodRight;
	extern int	ipadview;
	extern int	carsv;
	extern int	fastrv;
	extern bool magicb;
	extern int RapidFirea;
	extern int carss;
	extern int NoGravitya;
	extern int MagicXa;
	//extern int;
	//extern int;
	extern int FastSwitchWeapona;
	extern int FastParachutekey;
	extern bool FastParachute;
	extern	bool manfly;
	extern int Flymankey;
	extern int landspeed;
	extern int Fastcarkey;
	extern int Backcarkey;
	extern int GodUp;
	extern int GodFront;
	extern int GodDown;
	extern bool CameraView;
	extern bool godView;
	extern int	view;
	extern bool Magic360deg;

	extern bool Luffy;
	extern bool IpadVeiw;
	extern bool crossHair;
	extern bool noSpread;
	extern float	flym;
	//////
	//////
	//////
	extern bool nofog;

	extern bool Magnetbullet;
	extern bool notree;
	extern int Godright;
	extern int Godleft;
	extern int GodBACK;
	extern int GodFRONT;
	extern bool fastparachute;
	extern bool luffy;
	extern bool crossairv2;
	extern bool instantv2;

	extern bool fastrunv1;
	extern bool yellowcontroller;
	extern bool knockspeed;
	extern bool pronespeed;
	extern bool RapidFire;
	extern int FightModeKey;

	extern bool speeddown;
	extern bool fixflash;
	extern bool flashon;
	extern bool flashof;
	extern bool nosmoke;
	extern bool recoil2;
	extern bool up;
	extern bool down;

	extern bool wallloot;

	extern bool pruplefog;
	extern bool canyonfog;
	extern bool wallshot;

	extern bool flyman;
	extern bool noheadshot;
	////
	extern float Ipadviewa;
	extern bool statusgame;
	/////
	extern bool AirDrop;
	extern bool linne1;
	extern bool linne2;
	extern bool style3;
	//ايتم بالصور
	extern bool ItemsImage;
	extern bool Esp_Item_45ACPm;
	extern bool Esp_Item_762mmm;
	extern bool Esp_Item_556mmm;
	extern bool Esp_Item_9mmm;
	extern bool Vehiclem;
	extern bool GoldenTOm;
	extern bool grwm;
	extern bool molowm;
	extern bool Smokm;
	extern bool deadboxm;
	extern bool AirDropm;
	extern bool Esp_Item_Smokem;
	extern bool Esp_Item_Molotofm;
	extern bool Esp_Item_Molotofmm;
	extern bool Esp_Item_M416m;
	extern bool Esp_Item_AKMm;
	extern bool Esp_Item_SCARLm;
	extern bool Esp_Item_DBSm;
	extern bool Esp_Item_M24m;
	extern bool Esp_Item_Kar98km;
	extern bool planm;
	extern bool Esp_Item_DP28m;
	extern bool Esp_Item_M762m;
	extern bool Esp_Item_Awmm;
	extern bool Esp_Item_FlareGunm;
	extern bool Esp_Item_Flarem;
	extern bool Esp_Item_Armor3m;
	extern bool Esp_Item_Bag3m;
	extern bool Esp_Item_Helmet3m;
	extern bool Esp_Item_MedKitm;
	extern bool Esp_Item_FirstAidKitm;
	extern bool Esp_Item_Painkillerm;
	extern bool Esp_Item_EnergyDrinkm;
	extern bool Esp_Item_AdrenalineSyringem;
	extern bool Esp_Item_x2m;
	extern bool Esp_Item_x3m;
	extern bool Esp_Item_x4m;
	extern bool Esp_Item_x6m;
	extern bool Esp_Item_x8m;
	extern bool Esp_Item_Bag1m;
	extern bool Esp_Item_Bag2m;
	extern bool Esp_Item_Helmet1m;
	extern bool Esp_Item_Helmet2m;
	extern bool Esp_Item_Armor1m;
	extern bool Esp_Item_Armor2m;
	extern bool Esp_Item_Mk47Mutantm;
	extern bool Esp_Item_M16A4m;
	extern bool Esp_Item_G36Cm;
	extern bool Esp_Item_QBZm;
	extern bool Esp_Item_QBUm;
	extern bool Esp_Item_SLRm;
	extern bool Esp_Item_Mini14m;
	extern bool Esp_Item_PP19m;
	extern bool Esp_Item_TommyGunm;
	extern bool Esp_Item_MP5Km;
	extern bool Esp_Item_UMP9m;
	extern bool Esp_Item_Vectorm;
	extern bool Esp_Item_Uzim;
	extern bool Esp_Item_Holom;
	extern bool Esp_Item_M249m;
	extern bool Esp_Item_Mk12m;
	///
	extern bool playerdeadbox1;
	extern bool TeamId;
	extern bool Weapon;
	extern bool LOL;
	extern bool ScreenX;
	extern bool GoldenTO;
	extern bool salah;
	extern bool aiming;
	extern bool BONEHEAD;
	extern bool quickloot;
	extern bool nospread;
	extern bool norecoil2;
	extern bool fastgunswitch;
	extern bool rapidfire;
	extern bool Ipadview;
	extern bool FastSwitch;
	extern bool FastLoot;
	extern bool norecoil;
	extern bool Esp_Item_AUG;
	/////
	extern	bool M416CalloftheWild;
	extern	bool M416Joker;
	extern	bool M416Glacier;
	extern	bool M416DRAGON;
	extern	bool M416Wanderer;
	extern	bool AKMGhillieDragon;
	extern	bool AKMHellFire;
	extern	bool AKMDJackolantern;
	extern	bool AKMDesertFossil;
	extern	bool AKMGlacier;
	extern	bool M24PharaohsMight;
	extern	bool M76_28_bit_Unicorn;
	extern	bool Forest_Raider_GROZA;
	extern	bool Eventide_Aria_GROZA;
	extern	bool Lotus_Fury_M762;
	extern	bool Radiant_Edge_M16A4;
	extern	bool Aurora_Pulse_M16A4;
	extern	bool Blood_Bones_M16A4;
	extern	bool Concerto_of_Love_M762;
	extern	bool Operation_Tomorrow_SCAR_L;
	extern	bool Water_Blaster_SCAR_L;
	extern	bool Drop_the_Bass_SCAR_L;
	extern	bool Enchanted_Pumpkin_SCAR_L;
	extern	bool Winter_Queen_M249;
	extern	bool Night_of_Rock_Pan;
	extern	bool Honeypot_Pan;
	extern	bool Crocodile_Pan;
	extern	bool Field_Commander_AWM;

	extern	bool Enigmatic_Killer_DP28;

	extern	bool Mauve_Avenger_AWM;
	extern	bool Godzilla_AWM;
	extern	bool Terror_Fang_Kar98K;
	extern	bool Kukulkan_Fury_Kar98K;
	extern	bool Night_of_Rock_Kar98K;
	extern	bool Moonlit_Grace_Kar98K;
	extern	bool M24TheSevenSeas;
	extern	bool M24LadyButterfly;
	extern	bool KillerTune;
	extern	bool RAVENXSUITSet;
	extern	bool PharoSUITSet;
	extern	bool PosidonSUITSet;
	extern	bool AKMRoaringTiger;
	extern	bool AKMTheSevenSeas;
	//
	//
	extern bool sEsp_Item_M416;
	extern bool sEsp_Item_AKM;
	extern bool sEsp_Item_SCARL;
	extern bool sEsp_Item_M762;
	extern bool sEsp_Item_FAMAS;
	extern bool sEsp_Item_Mk47Mutant;
	extern bool sEsp_Item_AUG;
	extern bool sEsp_Item_Groza;
	extern bool sEsp_Item_M16A4;
	extern bool sEsp_Item_AN94;
	extern bool sEsp_Item_G36C;
	extern bool sEsp_Item_QBZ;
	extern bool sEsp_Item_Awm;
	extern bool sEsp_Item_M24;
	extern bool sEsp_Item_Kar98k;
	extern bool sEsp_Item_VSS;
	extern bool sEsp_Item_Win94;
	extern bool sEsp_Item_Mosin;
	extern bool sEsp_Item_Mk14;
	extern bool sEsp_Item_Mk12;
	extern bool sEsp_Item_QBU;
	extern bool sEsp_Item_SLR;
	extern bool sEsp_Item_SKS;
	extern bool sEsp_Item_Mini14;
	extern bool sEsp_Item_DBS;
	extern bool sEsp_Item_S12K;
	extern bool sEsp_Item_S686;
	extern bool sEsp_Item_S1897;
	extern bool sEsp_Item_SawedOff;
	extern bool sEsp_Item_M1014;
	extern bool sEsp_Item_P90;
	extern bool sEsp_Item_PP19;
	extern bool sEsp_Item_TommyGun;
	extern bool sEsp_Item_MP5K;
	extern bool sEsp_Item_UMP9;
	extern bool sEsp_Item_Vector;
	extern bool sEsp_Item_Uzi;
	extern bool sEsp_Item_Armor1;
	extern bool sEsp_Item_Armor2;
	extern bool sEsp_Item_Armor3;
	extern bool sEsp_Item_Bag1;
	extern bool sEsp_Item_Bag2;
	extern bool sEsp_Item_Bag3;
	extern bool sEsp_Item_Helmet1;
	extern bool sEsp_Item_Helmet2;
	extern bool sEsp_Item_Helmet3;
	extern bool sEsp_Item_RedDot;
	extern bool sEsp_Item_Holo;
	extern bool sEsp_Item_x2;
	extern bool sEsp_Item_x3;
	extern bool sEsp_Item_x4;
	extern bool sEsp_Item_x6;
	extern bool sEsp_Item_x8;
	extern bool sEsp_Item_DP28;
	extern bool sEsp_Item_M249;
	extern bool sEsp_Item_CrossBow;
	extern bool sEsp_Item_MG3;
	extern bool sEsp_Item_FlareGun;
	extern bool sEsp_Item_R1895;
	extern bool sEsp_Item_P92;
	extern bool sEsp_Item_P18C;
	extern bool sEsp_Item_R45;
	extern bool sEsp_Item_P1911;
	extern bool sEsp_Item_DesertEagle;
	extern bool sEsp_Item_Awmimo;
	extern bool sEsp_Item_Flare;
	extern bool sEsp_Item_762mm;
	extern bool sEsp_Item_556mm;
	extern bool sEsp_Item_9mm;
	extern bool sEsp_Item_45ACP;
	extern bool sEsp_Item_12Guagemm;
	extern bool sEsp_Item_Boltmm;
	extern bool sEsp_Item_GasCan;
	extern bool sEsp_Item_MedKit;
	extern bool sEsp_Item_FirstAidKit;
	extern bool sEsp_Item_Painkiller;
	extern bool sEsp_Item_EnergyDrink;
	extern bool sEsp_Item_AdrenalineSyringe;
	extern bool sEsp_Item_Frag;
	extern bool sEsp_Item_Smoke;
	extern bool sEsp_Item_Molotof;
	extern bool sEsp_Item_Vz61;
	extern float fovSize;
	extern int fovRealSize;
	extern bool Esp_Item_Golden;
	extern bool Esp_Item_AirAttack;
	extern bool Esp_Item_DBS;

	//
	//
	extern bool Esp_Item_VSS;
	extern bool Esp_Item_Win94;
	extern bool Esp_Item_Mosin;
	extern bool Esp_Item_Mk14;
	extern bool Esp_Item_Mk12;
	extern bool Esp_Item_FAMAS;
	extern bool Esp_Item_AN94;
	extern bool Esp_Item_Groza;
	extern bool Esp_Item_CrossBow;
	extern bool Esp_Item_MG3;
	extern bool Esp_Item_S12K;
	extern bool Esp_Item_S686;
	extern bool Esp_Item_S1897;
	extern bool Esp_Item_SawedOff;
	extern bool Esp_Item_M1014;
	extern bool Esp_Item_P90;
	extern bool Esp_Item_P18C;
	extern bool Esp_Item_R1895;
	extern bool Esp_Item_Vz61;
	extern bool Esp_Item_P92;
	extern bool Esp_Item_R45;
	extern bool Esp_Item_P1911;
	extern bool Esp_Item_DesertEagle;
	extern bool Esp_Item_12Guagemm;
	extern bool Esp_Item_Boltmm;
	extern bool Esp_Item_RedDot;
	extern bool Esp_Item_deadbox;
	extern bool Esp_Item_GasCan;
	//
	extern bool ipad;
	extern bool PowerMagic;
	extern bool xEffect;
	extern bool ForceTPP;
	extern bool flymankey;
	extern bool Smok;
	extern int	FRONT;
	extern int	BACK;
	extern int	LEFT;
	extern int	RIGHT;
	extern int	UP;
	extern int	DOWN;
	extern int landa;
	extern float writee;
	/////
	extern int SKS;
	extern int VSS;
	extern int Win94;
	extern int Mosin;


	extern int AUG;

	extern int Groza;
	extern int CrossBow;

	extern int S12K;
	extern int S686;
	extern int S1897;
	extern int SawedOff;
	extern int M1014;
	extern int R1895;
	extern int Vz61;
	extern int P92;
	extern int P18C;
	extern int R45;
	extern int P1911;
	extern int DesertEagle;
	extern int a12Guagemm;
	extern int Boltmm;
	extern int RedDot;
	extern int GasCan;
	extern int P90;
	/////
	extern int x8;
	extern int x6;
	extern int x4;
	extern int x3;
	extern int x2;
	extern int Holo;
	extern int a45ACP;
	extern bool radar;
	extern int  RadarLength;
	extern int  RadarWidth;
	extern int a9mm;
	extern int a556mm;
	extern int a762mm;
	extern int Armor3;
	extern int Armor2;
	extern int Armor1;
	extern int Helmet1;
	extern int Helmet2;
	extern int Helmet3;
	extern int Bag1;
	extern int Bag2;
	extern int Bag3;
	extern int M16A4;
	extern int Mk12;
	extern int M249;
	extern int ntid;

	extern int m16;
	extern int DBS;
	extern int Golden;
	extern int AKM;
	extern int frag;
	extern int Molotof;
	extern int Smoke;
	extern int Drop;

	extern int deadbox1;
	extern int deadboxl;
	extern int AdrenalineSyringe;
	extern int EnergyDrink;
	extern int Painkiller;
	extern int FirstAidKit;
	extern int MedKit;
	extern int AWM;
	extern int AWMimmo;
	extern int aug;
	extern int DP28;
	extern int QBZ;
	extern int QBU;
	extern int SLR;

	extern int Mini14;
	extern int PP19;
	extern int TommyGun;
	extern int MP5K;
	extern int UMP9;
	extern int Vector;
	extern int Mk47Mutant;
	extern int Uzi;
	extern int G36C;
	extern int scarl;
	extern int m762;
	extern int M24;
	extern int GROZZA;
	extern int scope8x;
	extern int kar98;
	extern int Airdrop;
	extern int Flare;
	extern int Flaregun;
	extern int flag;



	extern int norecoila;
	extern int FastParachutea;

	extern int flymana;
	extern int ipadv;
	extern int luffya;
	extern int flashona;
}