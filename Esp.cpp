//join @vipsourcecode for more free sources
#define STB_IMAGE_IMPLEMENTATION
#include"stb_image.h"
#pragma warning(disable : 4996)
#include "xorstr.hpp"
#include"SimpleIni.h"
#include <D3DX11tex.h>
#define LOADER_BRAND "Loader base"
#include "Esp.h"
#include <iostream>
#include <fstream>
#include"Mem.h"
#include "api/KeyAuth.hpp"
#include "AirDrop.h"
#include "Image.h"
#include "Discord.h"
#include "FLARE.h"
#include "flags/AL.h"
#include "flags/DZ.h"
#include "flags/AS.h"
#include "flags/AD.h"
#include "flags/AO.h"
#include "flags/AI.h"
#include "flags/G1.h"
#include "flags/AG.h"
#include "flags/AR.h"
#include "flags/AM.h"
#include "flags/AW.h"
#include "flags/AU.h"
#include "flags/AT.h"
#include "flags/AZ.h"
#include "flags/BS.h"
#include "flags/BH.h"
#include "flags/BD.h"
#include "flags/BB.h"
#include "flags/BY.h"
#include "flags/BE.h"
#include "flags/BZ.h"
#include "flags/BJ.h"
#include "flags/BM.h"
#include "flags/BT.h"
#include "flags/BO.h"
#include "flags/BA.h"
#include "flags/BW.h"
#include "flags/BV.h"
#include "flags/BR.h"
#include "flags/IO.h"
#include "flags/BN.h"
#include "flags/BG.h"
#include "flags/BF.h"
#include "flags/BI.h"
#include "flags/CV.h"
#include "flags/KH.h"
#include "flags/CM.h"
#include "flags/CA.h"
#include "flags/KY.h"
#include "flags/CF.h"
#include "flags/TD.h"
#include "flags/CL.h"
#include "flags/CN.h"
#include "flags/CX.h"
#include "flags/CC.h"
#include "flags/CO.h"
#include "flags/KM.h"
#include "flags/CD.h"
#include "flags/CG.h"
#include "flags/CK.h"
#include "flags/CR.h"
#include "flags/HR.h"
#include "flags/CU.h"
#include "flags/CW.h"
#include "flags/CY.h"
#include "flags/CZ.h"
#include "flags/CI.h"
#include "flags/DK.h"
#include "flags/DJ.h"
#include "flags/DM.h"
#include "flags/DO.h"
#include "flags/EC.h"
#include "flags/EG.h"
#include "flags/SV.h"
#include "flags/GQ.h"
#include "flags/ER.h"
#include "flags/EE.h"
#include "flags/SZ.h"
#include "flags/ET.h"
#include "flags/FK.h"
#include "flags/FO.h"
#include "flags/FJ.h"
#include "flags/FI.h"
#include "flags/FR.h"
#include "flags/GF.h"
#include "flags/PF.h"
#include "flags/TF.h"
#include "flags/GA.h"
#include "flags/GM.h"
#include "flags/GE.h"
#include "flags/DE.h"
#include "flags/GH.h"
#include "flags/GI.h"
#include "flags/GR.h"
#include "flags/GL.h"
#include "flags/GD.h"
#include "flags/GP.h"
#include "flags/GU.h"
#include "flags/GT.h"
#include "flags/GG.h"
#include "flags/GN.h"
#include "flags/GW.h"
#include "flags/GY.h"
#include "flags/HT.h"
#include "flags/HM.h"
#include "flags/VA.h"
#include "flags/HN.h"
#include "flags/HK.h"
#include "flags/HU.h"
#include "flags/JP.h"
#include "flags/JE.h"
#include "flags/JM.h"
#include "flags/JO.h"
#include "flags/KZ.h"
#include "flags/KE.h"
#include "flags/KI.h"
#include "flags/KP.h"
#include "flags/KR.h"
#include "flags/KW.h"
#include "flags/KG.h"
#include "flags/LA.h"
#include "flags/LV.h"
#include "flags/LB.h"
#include "flags/LS.h"
#include "flags/LR.h"
#include "flags/LY.h"
#include "flags/LI.h"
#include "flags/LT.h"
#include "flags/LU.h"
#include "flags/MO.h"
#include "flags/MG.h"
#include "flags/MW.h"
#include "flags/MY.h"
#include "flags/MV.h"
#include "flags/ML.h"
#include "flags/MT.h"
#include "flags/MH.h"
#include "flags/MQ.h"
#include "flags/MR.h"
#include "flags/MU.h"
#include "flags/YT.h"
#include "flags/MX.h"
#include "flags/FM.h"
#include "flags/MD.h"
#include "flags/MC.h"
#include "flags/MN.h"
#include "flags/ME.h"
#include "flags/MS.h"
#include "flags/MA.h"
#include "flags/MZ.h"
#include "flags/MM.h"
#include "flags/NA.h"
#include "flags/NR.h"
#include "flags/NP.h"
#include "flags/NL.h"
#include "flags/NC.h"
#include "flags/NZ.h"
#include "flags/NI.h"
#include "flags/NE.h"
#include "flags/NG.h"
#include "flags/NU.h"
#include "flags/NF.h"
#include "flags/MP.h"
#include "flags/NO.h"
#include "flags/PK.h"
#include "flags/PW.h"
#include "flags/PS.h"
#include "flags/PA.h"
#include "flags/PG.h"
#include "flags/PY.h"
#include "flags/PE.h"
#include "flags/PH.h"
#include "flags/PN.h"
#include "flags/PL.h"
#include "flags/PT.h"
#include "flags/PR.h"
#include "flags/QA.h"
#include "flags/MK.h"
#include "flags/RO.h"
#include "flags/RU.h"
#include "flags/RW.h"
#include "flags/RE.h"
#include "flags/BL.h"
#include "flags/SH.h"
#include "flags/KN.h"
#include "flags/LC.h"
#include "flags/MF.h"
#include "flags/PM.h"
#include "flags/VC.h"
#include "flags/WS.h"
#include "flags/SM.h"
#include "flags/ST.h"
#include "flags/SA.h"
#include "flags/SN.h"
#include "flags/RS.h"
#include "flags/SC.h"
#include "flags/SL.h"
#include "flags/SG.h"
#include "flags/SX.h"
#include "flags/SK.h"
#include "flags/SI.h"
#include "flags/SB.h"
#include "flags/SO.h"
#include "flags/ZA.h"
#include "flags/GS.h"
#include "flags/SS.h"
#include "flags/LK.h"
#include "flags/SD.h"
#include "flags/SR.h"
#include "flags/SJ.h"
#include "flags/SE.h"
#include "flags/CH.h"
#include "flags/SY.h"
#include "flags/TW.h"
#include "flags/TJ.h"
#include "flags/TZ.h"
#include "flags/TH.h"
#include "imguipp.h"
#include "flags/TL.h"
#include "flags/TG.h"
#include "flags/TK.h"
#include "flags/TO.h"
#include "flags/TT.h"
#include "flags/TN.h"
#include "flags/TR.h"
#include "flags/TM.h"
#include "flags/TC.h"
#include "flags/TV.h"
#include "flags/UG.h"
#include "flags/UA.h"
#include "flags/AE.h"
#include "flags/GB.h"
#include "flags/US.h"
#include "flags/UY.h"
#include "flags/UZ.h"
#include "flags/VU.h"
#include "flags/VE.h"
#include "flags/VN.h"
#include "flags/VG.h"
#include "flags/VI.h"
#include "flags/WF.h"
#include "flags/YE.h"
#include "flags/ZM.h"
#include "flags/ZW.h"
#include "flags/AX.h"
#include "flags/IS.h"
#include "flags/IN.h"
#include "flags/ID.h"
#include "flags/IR.h"
#include "flags/IQ.h"
#include "flags/IE.h"
#include "flags/IM.h"
#include "flags/IL.h"
#include "flags/IT.h"
#include "SCAR.h"
#include "m416.h"
#include "HEL3.h"
#include "AKM.h"
#include "YAs.h"
#include "AYS.h"
#include "AID.h"
#include "DROP.h"
#include "X6.h"
#include "M24.h"
#include "KID.h"
#include "X8.h"
#include "KAR.h"
#include "X4.h"
#include "M726.h"
#include "DP12.h"
#include "MAS.h"
#include "Header1.h"
#include "Header2.h"
#include "Header3.h"
#include "Header4.h"
#include "Header5.h"
#include "Header6.h"
#include "Header7.h"
#include "Header8.h"
#include "Header9.h"
#include "Header10.h"
#include "Header11.h"
#include "Header12.h"
#include "Header13.h"
#include "Header14.h"
#include "Header15.h"
#include "Header16.h"
#include "Header17.h"
#include "Header18.h"
#include "Header19.h"
#include "Header20.h"
#include "Header21.h"
#include "Header22.h"
#include "Header23.h"
#include "Header24.h"
#include "Header25.h"
#include "Header26.h"
#include "Header27.h"

//join @vipsourcecode for more free sources

#pragma comment(lib, "urlmon.lib")
#pragma endregion
float Esp_Item_M762_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_Mk47Mutant_Color[] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Esp_Item_DP28_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_SCARL_Color[] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Esp_Item_M416_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_M16A4_Color[] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Esp_Item_G36C_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_QBZ_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_QBU_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_SLR_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Esp_Item_SKS_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Esp_Item_Mini14_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_M24_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_Kar98k_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Esp_Item_PP19_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_TommyGun_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_MP5K_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_UMP9_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_Vector_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_Uzi_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_762mm_Color[] = { 0.984f, 0.871f, 0.043f, 1.000f };
float Esp_Item_556mm_Color[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Esp_Item_9mm_Color[] = { 1.000f, 0.000f, 0.337f, 1.000f };
float Esp_Item_45ACP_Color[] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Esp_Item_Holo_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Esp_Item_x2_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Esp_Item_x3_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Esp_Item_x4_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };

float Esp_Item_x6_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_x8_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_Bag1_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };

float Esp_Item_Bag2_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };
float nam[] = { 1.000f, 1.000f, 0.000f, 1.000f };
float bot[] = { 0.016f, 0.725f, 0.929f, 1.0f };
float hpt[] = { 255, 255, 255, 255 };
float skelec[] = { 255, 255, 255, 255 };
float enemy[] = { 255, 255, 255, 255 };

float Golden[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float m16[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float AKM[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float DBS[] = { 255, 255, 255, 255 };
float AWM[] = { 255, 255, 255, 255 };
float AWMimmo[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float AirAttack[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float scarl[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float m762[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float GROZZA[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float scope8x[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float kar98[] = { 255, 255, 255, 255 };
float Airdrop[] = { 1.000f, 0.667f, 0.000f, 1.000f };
float Flare[] = { 255, 255, 255, 255 };
float Flaregun[] = { 255, 255, 255, 255 };
////
float VSS[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float Win94[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float Mk14[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float FAMAS[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float AN94[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float CrossBow[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float S12K[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float S686[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float S1897[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float SawedOff[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float M1014[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float P90[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float R1895[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float Vz61[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float P92[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float P18C[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float R45[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float P1911[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float DesertEagle[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float a12Guagemm[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float Boltmm[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float RedDot[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float GasCan[] = { 0.050f, 0.125f, 0.925f, 1.0f };
/////////////////////////drop//////////////////////////
float dp[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float mg3[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float scope4x[] = { 0.937f, 0.063f, 0.937f, 1.000f };
float scope3x[] = { 0.874f, 0.484f, 0.106f, 1.000f };
float bag[] = { 0.529f, 0.127f, 0.903f, 1.000f };
float armer[] = { 0.591f, 1.000f, 0.237f, 1.000f };
float helmat[] = { 0.726f, 0.070f, 0.908f, 1.000f };
float mosin[] = { 1.000f, 0.647f, 0.000f, 1.000f };
float aug[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float g36[] = { 0.671f, 0.217f, 1.000f, 1.000f };
float assm[] = { 1.000f, 0.217f, 0.762f, 1.000f };
float Grandes[] = { 1.000f, 0.396f, 0.357f, 1.000f };
float ammo7[] = { 0.984f, 0.871f, 0.043f, 1.000f };
float ammo5[] = { 0.000f, 1.000f, 0.318f, 1.000f };
float madkit[] = { 0.952f, 0.558f, 0.129f, 1.000f };
float Botlinescolors[] = { 255, 255, 255, 255 };
float BONEHEADcolors[] = { 255, 255, 255, 255 };
float itemcolors;//[] = { 1.000f, 0.100f, 0.401f, 1.000f };
float playerline[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float playercorner[] = { 1.0f, 0.70f,0.30f, 1.0f };
float playerbox[] = { 1.0f, 1.0f,0.0f, 1.0f };
float lotbox[] = { 1.0f, 1.0f,0.0f, 1.0f };
// ARGB
float helthbar[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float boxColor[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float cornerColor[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float crosshairColor[] = { 0.950f, 0.125f, 0.125f, 1.0f };

float player[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float vehicle[] = { 1.000f, 1.000f, 0.000f, 1.000f };
//RGB
float botcorner[] = { 0.050f, 0.125f, 0.925f, 1.0f };
float botline[] = { 0.050f, 0.025f, 0.925f, 1.0f };
float circle[] = { 0.950f, 0.125f, 0.125f, 1.0f };

float falg[] = { 255, 255, 255, 255 };
float botbox[] = { 0.950f, 0.125f, 0.925f, 1.0f };
float bone[] = { 0.950f, 0.125f, 0.125f, 1.0f };
float fillrect[] = { 0.950f, 0.125f, 0.125f, 1.0f };

float nambar[] = { 0.880f, 0.185f, 0.25f, 1.0f };
float bothealth[] = { 0.95f, 0.125f, 0.825f, 1.0f };
float botname[] = { 0.050f, 0.825f, 0.185f, 1.0f };
float playerhealth[] = { 0.50f, 0.725f, 0.105f, 1.0f };
float textcolor[] = { 0.500f, 0.150f, 0.125f, 1.0f };
float Granades[] = { 0.990f, 0.995f, 0.995f, 1.0f };
float health[] = { 0.108f, 1.000f, 1.000f, 1.000f };
float deadbox[] = { 1.000f, 0.000f, 0.000f, 1.000 };
float deadboxitem[] = { 1.000f, 0.100f, 0.401f, 1.000f };
float airdrop[] = { 1.000f, 0.695f, 0.323f, 1.000f };
float airdropitem[] = { 0.300f, 0.695f, 0.323f, 1.000f };
float scopetextcolor[] = { 0.000f, 0.995f, 0.995f, 1.000f };
float allitem[] = { 0.034f, 1.000f, 0.040f, 1.000f };
float scope6x[] = { 0.120f, 0.955f, 0.125f, 1.0f };
float botbone[] = { 0.050f, 0.025f, 0.925f, 1.0f };
float playerbone[] = { 0.986f, 0.952f, 0.209f, 1.000f };
float magicline[] = { 255, 0, 0, 255 };
float bgcorner[] = { 0.000f, 1.000f, 0.964f, 1.000f };
float fovcirclecolor[] = { 255, 0, 0, 255 };

float skelec1[] = { 255, 255, 0, 255 };


float Esp_Item_Smoke_Color[] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Esp_Item_Frag_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Esp_Item_Helmet3_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Esp_Item_Helmet2_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Esp_Item_Helmet1_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Esp_Item_Armor3_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Esp_Item_AKM_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };
float M249[] = { 1.000f, 0.647f, 0.000f, 1.000f };

float MK12[] = { 1.00f, 0.796f, 0.715f, 1.0f };



float plancolor[] = { 0.737f, 1.000f, 0.000f, 1.000f };
float dotss[] = { 0.950f, 0.125f, 0.925f, 1.0f };
float Esp_Item_Bag3_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };

float Esp_Item_Armor1_Color[] = { 0.000f, 0.682f, 1.000f, 1.000f };

float Esp_Item_Armor2_Color[] = { 0.627f, 0.102f, 0.941f, 1.000f };




float Esp_Item_Molotof_Color[] = { 1.000f, 1.000f, 0.000f, 1.000f };

float Esp_Item_MedKit_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_FirstAidKit_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_Painkiller_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_EnergyDrink_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_AdrenalineSyringe_Color[] = { 1.000f, 0.753f, 0.796f, 1.000f };

float Esp_Item_FlareGun_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_Flare_Color[] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Esp_Item_AirDrop_Color[] = { 1.000f, 0.647f, 0.000f, 1.000f };

#pragma endregion
float fround(float var)
{
	float value = (int)(var * 100 + .5);
	return (float)value / 100;
}
using namespace KeyAuth;
static std::vector<std::string> TotalPlayerAiming = {};
bool fight = true;
//char key[60] = "";
std::string str = "ROG";
bool login = false;
bool loginn = true;
bool SaveUsers = true;
bool savekey = true;
bool fps = true;
int SMOKES = 15;
int MOLOS = 15;
int FRAGS = 15;
bool loader_active = true;
D3DMATRIX Esp::ViewMatrix;
static bool Bot = true;
static bool Player = true;
std::string tim;
char str1[60] = "";
float overlaycolor = 0.0f;
int teamids;
ImVec4 linescolors;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 bonescolors;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 fullboxcolor;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 cornerboxcolor;// = { 1.0f,1.0f,1.0f,1.0f };

int weapsize = 14;

std::string AimAt[] = { "Head      ", "Chest     ", "Pelvis     " };

ImVec4 blinescolors;
ImVec4 bbonescolors;
ImVec4 bfullboxcolor;
ImVec4 bcornerboxcolor;
bool driving = true;
ImColor col;
bool unload = false;

static auto Flags2 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
static auto Flags = ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
static auto Flags21 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar;
#pragma region FLAGS

ID3D11ShaderResourceView* AFFLAG = nullptr;

ID3D11ShaderResourceView* ALFLAG = nullptr;

ID3D11ShaderResourceView* DZFLAG = nullptr;

ID3D11ShaderResourceView* ASFLAG = nullptr;

ID3D11ShaderResourceView* ADFLAG = nullptr;

ID3D11ShaderResourceView* AOFLAG = nullptr;

ID3D11ShaderResourceView* AIFLAG = nullptr;

ID3D11ShaderResourceView* AQFLAG = nullptr;

ID3D11ShaderResourceView* AGFLAG = nullptr;

ID3D11ShaderResourceView* ARFLAG = nullptr;

ID3D11ShaderResourceView* AMFLAG = nullptr;

ID3D11ShaderResourceView* AWFLAG = nullptr;

ID3D11ShaderResourceView* AUFLAG = nullptr;

ID3D11ShaderResourceView* ATFLAG = nullptr;

ID3D11ShaderResourceView* AZFLAG = nullptr;

ID3D11ShaderResourceView* BSFLAG = nullptr;

ID3D11ShaderResourceView* BHFLAG = nullptr;

ID3D11ShaderResourceView* BDFLAG = nullptr;

ID3D11ShaderResourceView* BBFLAG = nullptr;

ID3D11ShaderResourceView* BYFLAG = nullptr;

ID3D11ShaderResourceView* BEFLAG = nullptr;

ID3D11ShaderResourceView* BZFLAG = nullptr;

ID3D11ShaderResourceView* BJFLAG = nullptr;

ID3D11ShaderResourceView* BMFLAG = nullptr;

ID3D11ShaderResourceView* BTFLAG = nullptr;

ID3D11ShaderResourceView* BOFLAG = nullptr;

ID3D11ShaderResourceView* BQFLAG = nullptr;

ID3D11ShaderResourceView* BAFLAG = nullptr;

ID3D11ShaderResourceView* BWFLAG = nullptr;

ID3D11ShaderResourceView* BVFLAG = nullptr;

ID3D11ShaderResourceView* BRFLAG = nullptr;

ID3D11ShaderResourceView* IOFLAG = nullptr;

ID3D11ShaderResourceView* BNFLAG = nullptr;

ID3D11ShaderResourceView* BGFLAG = nullptr;

ID3D11ShaderResourceView* BFFLAG = nullptr;

ID3D11ShaderResourceView* BIFLAG = nullptr;

ID3D11ShaderResourceView* CVFLAG = nullptr;

ID3D11ShaderResourceView* KHFLAG = nullptr;

ID3D11ShaderResourceView* CMFLAG = nullptr;

ID3D11ShaderResourceView* CAFLAG = nullptr;

ID3D11ShaderResourceView* KYFLAG = nullptr;

ID3D11ShaderResourceView* CFFLAG = nullptr;

ID3D11ShaderResourceView* TDFLAG = nullptr;

ID3D11ShaderResourceView* CLFLAG = nullptr;

ID3D11ShaderResourceView* CNFLAG = nullptr;

ID3D11ShaderResourceView* CXFLAG = nullptr;

ID3D11ShaderResourceView* CCFLAG = nullptr;

ID3D11ShaderResourceView* COFLAG = nullptr;

ID3D11ShaderResourceView* KMFLAG = nullptr;

ID3D11ShaderResourceView* CDFLAG = nullptr;
ID3D11ShaderResourceView* CGFLAG = nullptr;

ID3D11ShaderResourceView* CKFLAG = nullptr;

ID3D11ShaderResourceView* CRFLAG = nullptr;

ID3D11ShaderResourceView* HRFLAG = nullptr;

ID3D11ShaderResourceView* CUFLAG = nullptr;

ID3D11ShaderResourceView* CWFLAG = nullptr;

ID3D11ShaderResourceView* CYFLAG = nullptr;

ID3D11ShaderResourceView* CZFLAG = nullptr;

ID3D11ShaderResourceView* CIFLAG = nullptr;

ID3D11ShaderResourceView* DKFLAG = nullptr;

ID3D11ShaderResourceView* DJFLAG = nullptr;

ID3D11ShaderResourceView* DMFLAG = nullptr;

ID3D11ShaderResourceView* DOFLAG = nullptr;

ID3D11ShaderResourceView* ECFLAG = nullptr;

ID3D11ShaderResourceView* EGFLAG = nullptr;

ID3D11ShaderResourceView* SVFLAG = nullptr;

ID3D11ShaderResourceView* GQFLAG = nullptr;

ID3D11ShaderResourceView* ERFLAG = nullptr;

ID3D11ShaderResourceView* EEFLAG = nullptr;

ID3D11ShaderResourceView* SZFLAG = nullptr;
ID3D11ShaderResourceView* ETFLAG = nullptr;
ID3D11ShaderResourceView* FKFLAG = nullptr;

ID3D11ShaderResourceView* FOFLAG = nullptr;
ID3D11ShaderResourceView* FJFLAG = nullptr;

ID3D11ShaderResourceView* FIFLAG = nullptr;

ID3D11ShaderResourceView* FRFLAG = nullptr;

ID3D11ShaderResourceView* GFFLAG = nullptr;

ID3D11ShaderResourceView* PFFLAG = nullptr;
ID3D11ShaderResourceView* TFFLAG = nullptr;
ID3D11ShaderResourceView* GAFLAG = nullptr;
ID3D11ShaderResourceView* GMFLAG = nullptr;
ID3D11ShaderResourceView* GEFLAG = nullptr;
ID3D11ShaderResourceView* DEFLAG = nullptr;
ID3D11ShaderResourceView* GHFLAG = nullptr;
ID3D11ShaderResourceView* GIFLAG = nullptr;
ID3D11ShaderResourceView* GRFLAG = nullptr;
ID3D11ShaderResourceView* GLFLAG = nullptr;
ID3D11ShaderResourceView* GDFLAG = nullptr;
ID3D11ShaderResourceView* GPFLAG = nullptr;
ID3D11ShaderResourceView* GUFLAG = nullptr;
ID3D11ShaderResourceView* GTFLAG = nullptr;
ID3D11ShaderResourceView* GGFLAG = nullptr;
ID3D11ShaderResourceView* GNFLAG = nullptr;
ID3D11ShaderResourceView* GWFLAG = nullptr;
ID3D11ShaderResourceView* GYFLAG = nullptr;
ID3D11ShaderResourceView* HTFLAG = nullptr;
ID3D11ShaderResourceView* HMFLAG = nullptr;
ID3D11ShaderResourceView* VAFLAG = nullptr;
ID3D11ShaderResourceView* HNFLAG = nullptr;
ID3D11ShaderResourceView* HKFLAG = nullptr;
ID3D11ShaderResourceView* HUFLAG = nullptr;
ID3D11ShaderResourceView* JMFLAG = nullptr;
ID3D11ShaderResourceView* G1FLAG = nullptr;
ID3D11ShaderResourceView* JPFLAG = nullptr;
ID3D11ShaderResourceView* JEFLAG = nullptr;
ID3D11ShaderResourceView* JOFLAG = nullptr;
ID3D11ShaderResourceView* KZFLAG = nullptr;
ID3D11ShaderResourceView* KEFLAG = nullptr;
ID3D11ShaderResourceView* KIFLAG = nullptr;
ID3D11ShaderResourceView* KPFLAG = nullptr;
ID3D11ShaderResourceView* KRFLAG = nullptr;
ID3D11ShaderResourceView* KWFLAG = nullptr;
ID3D11ShaderResourceView* KGFLAG = nullptr;
ID3D11ShaderResourceView* LAFLAG = nullptr;

ID3D11ShaderResourceView* LVFLAG = nullptr;
ID3D11ShaderResourceView* LBFLAG = nullptr;
ID3D11ShaderResourceView* LSFLAG = nullptr;
ID3D11ShaderResourceView* LRFLAG = nullptr;

ID3D11ShaderResourceView* LYFLAG = nullptr;

ID3D11ShaderResourceView* LIFLAG = nullptr;

ID3D11ShaderResourceView* LTFLAG = nullptr;

ID3D11ShaderResourceView* LUFLAG = nullptr;

ID3D11ShaderResourceView* MOFLAG = nullptr;

ID3D11ShaderResourceView* MGFLAG = nullptr;

ID3D11ShaderResourceView* MWFLAG = nullptr;

ID3D11ShaderResourceView* MYFLAG = nullptr;

ID3D11ShaderResourceView* MVFLAG = nullptr;

ID3D11ShaderResourceView* MLFLAG = nullptr;

ID3D11ShaderResourceView* MTFLAG = nullptr;

ID3D11ShaderResourceView* MHFLAG = nullptr;

ID3D11ShaderResourceView* MQFLAG = nullptr;

ID3D11ShaderResourceView* MRFLAG = nullptr;

ID3D11ShaderResourceView* MUFLAG = nullptr;

ID3D11ShaderResourceView* YTFLAG = nullptr;

ID3D11ShaderResourceView* MXFLAG = nullptr;

ID3D11ShaderResourceView* FMFLAG = nullptr;

ID3D11ShaderResourceView* MDFLAG = nullptr;

ID3D11ShaderResourceView* MCFLAG = nullptr;

ID3D11ShaderResourceView* MNFLAG = nullptr;

ID3D11ShaderResourceView* MEFLAG = nullptr;

ID3D11ShaderResourceView* MSFLAG = nullptr;

ID3D11ShaderResourceView* MAFLAG = nullptr;
ID3D11ShaderResourceView* MZFLAG = nullptr;
ID3D11ShaderResourceView* MMFLAG = nullptr;
ID3D11ShaderResourceView* NAFLAG = nullptr;
ID3D11ShaderResourceView* NRFLAG = nullptr;

ID3D11ShaderResourceView* NPFLAG = nullptr;

ID3D11ShaderResourceView* NLFLAG = nullptr;

ID3D11ShaderResourceView* NCFLAG = nullptr;

ID3D11ShaderResourceView* NZFLAG = nullptr;

ID3D11ShaderResourceView* NIFLAG = nullptr;

ID3D11ShaderResourceView* NEFLAG = nullptr;

ID3D11ShaderResourceView* NGFLAG = nullptr;
ID3D11ShaderResourceView* MEGAAAA = nullptr;
ID3D11ShaderResourceView* NUFLAG = nullptr;

ID3D11ShaderResourceView* NFFLAG = nullptr;

ID3D11ShaderResourceView* MPFLAG = nullptr;

ID3D11ShaderResourceView* NOFLAG = nullptr;

ID3D11ShaderResourceView* OMFLAG = nullptr;

ID3D11ShaderResourceView* PKFLAG = nullptr;

ID3D11ShaderResourceView* PWFLAG = nullptr;

ID3D11ShaderResourceView* PSFLAG = nullptr;

ID3D11ShaderResourceView* PAFLAG = nullptr;

ID3D11ShaderResourceView* PGFLAG = nullptr;

ID3D11ShaderResourceView* PYFLAG = nullptr;

ID3D11ShaderResourceView* PEFLAG = nullptr;

ID3D11ShaderResourceView* PHFLAG = nullptr;

ID3D11ShaderResourceView* PNFLAG = nullptr;

ID3D11ShaderResourceView* PLFLAG = nullptr;

ID3D11ShaderResourceView* PTFLAG = nullptr;

ID3D11ShaderResourceView* PRFLAG = nullptr;
ID3D11ShaderResourceView* QAFLAG = nullptr;

ID3D11ShaderResourceView* MKFLAG = nullptr;

ID3D11ShaderResourceView* ROFLAG = nullptr;

ID3D11ShaderResourceView* RUFLAG = nullptr;

ID3D11ShaderResourceView* RWFLAG = nullptr;

ID3D11ShaderResourceView* REFLAG = nullptr;

ID3D11ShaderResourceView* BLFLAG = nullptr;

ID3D11ShaderResourceView* SHFLAG = nullptr;

ID3D11ShaderResourceView* KNFLAG = nullptr;

ID3D11ShaderResourceView* LCFLAG = nullptr;

ID3D11ShaderResourceView* MFFLAG = nullptr;

ID3D11ShaderResourceView* PMFLAG = nullptr;

ID3D11ShaderResourceView* VCFLAG = nullptr;

ID3D11ShaderResourceView* WSFLAG = nullptr;

ID3D11ShaderResourceView* SMFLAG = nullptr;

ID3D11ShaderResourceView* STFLAG = nullptr;

ID3D11ShaderResourceView* SAFLAG = nullptr;

ID3D11ShaderResourceView* SNFLAG = nullptr;

ID3D11ShaderResourceView* RSFLAG = nullptr;

ID3D11ShaderResourceView* SCFLAG = nullptr;

ID3D11ShaderResourceView* SLFLAG = nullptr;

ID3D11ShaderResourceView* SGFLAG = nullptr;

ID3D11ShaderResourceView* SXFLAG = nullptr;

ID3D11ShaderResourceView* SKFLAG = nullptr;

ID3D11ShaderResourceView* SIFLAG = nullptr;

ID3D11ShaderResourceView* SBFLAG = nullptr;

ID3D11ShaderResourceView* SOFLAG = nullptr;

ID3D11ShaderResourceView* ZAFLAG = nullptr;

ID3D11ShaderResourceView* GSFLAG = nullptr;

ID3D11ShaderResourceView* SSFLAG = nullptr;

ID3D11ShaderResourceView* ESFLAG = nullptr;

ID3D11ShaderResourceView* LKFLAG = nullptr;

ID3D11ShaderResourceView* SDFLAG = nullptr;

ID3D11ShaderResourceView* SRFLAG = nullptr;

ID3D11ShaderResourceView* SJFLAG = nullptr;

ID3D11ShaderResourceView* SEFLAG = nullptr;

ID3D11ShaderResourceView* CHFLAG = nullptr;

ID3D11ShaderResourceView* SYFLAG = nullptr;

ID3D11ShaderResourceView* TWFLAG = nullptr;

ID3D11ShaderResourceView* TJFLAG = nullptr;

ID3D11ShaderResourceView* TZFLAG = nullptr;

ID3D11ShaderResourceView* THFLAG = nullptr;

ID3D11ShaderResourceView* TLFLAG = nullptr;

ID3D11ShaderResourceView* TGFLAG = nullptr;
ID3D11ShaderResourceView* BaseG = nullptr;
ID3D11ShaderResourceView* SideG = nullptr;

ID3D11ShaderResourceView* TKFLAG = nullptr;

ID3D11ShaderResourceView* TOFLAG = nullptr;

ID3D11ShaderResourceView* TTFLAG = nullptr;

ID3D11ShaderResourceView* TNFLAG = nullptr;

ID3D11ShaderResourceView* TRFLAG = nullptr;

ID3D11ShaderResourceView* TMFLAG = nullptr;

ID3D11ShaderResourceView* TCFLAG = nullptr;

ID3D11ShaderResourceView* TVFLAG = nullptr;

ID3D11ShaderResourceView* UGFLAG = nullptr;

ID3D11ShaderResourceView* UAFLAG = nullptr;

ID3D11ShaderResourceView* AEFLAG = nullptr;

ID3D11ShaderResourceView* GBFLAG = nullptr;

ID3D11ShaderResourceView* USFLAG = nullptr;

ID3D11ShaderResourceView* UYFLAG = nullptr;

ID3D11ShaderResourceView* UZFLAG = nullptr;

ID3D11ShaderResourceView* VUFLAG = nullptr;

ID3D11ShaderResourceView* VEFLAG = nullptr;

ID3D11ShaderResourceView* VNFLAG = nullptr;

ID3D11ShaderResourceView* VGFLAG = nullptr;

ID3D11ShaderResourceView* VIFLAG = nullptr;

ID3D11ShaderResourceView* WFFLAG = nullptr;

ID3D11ShaderResourceView* EHFLAG = nullptr;

ID3D11ShaderResourceView* YEFLAG = nullptr;

ID3D11ShaderResourceView* ZMFLAG = nullptr;

ID3D11ShaderResourceView* ZWFLAG = nullptr;

ID3D11ShaderResourceView* AXFLAG = nullptr;

ID3D11ShaderResourceView* ISFLAG = nullptr;

ID3D11ShaderResourceView* INFLAG = nullptr;

ID3D11ShaderResourceView* IDFLAG = nullptr;

ID3D11ShaderResourceView* IRFLAG = nullptr;

ID3D11ShaderResourceView* IQFLAG = nullptr;

ID3D11ShaderResourceView* IEFLAG = nullptr;

ID3D11ShaderResourceView* IMFLAG = nullptr;

ID3D11ShaderResourceView* ILFLAG = nullptr;

ID3D11ShaderResourceView* ITFLAG = nullptr;

/////////////////////img
ID3D11ShaderResourceView* TotalA = nullptr;

ID3D11ShaderResourceView* mk1 = nullptr;
ID3D11ShaderResourceView* sk1 = nullptr;
ID3D11ShaderResourceView* M45 = nullptr;
ID3D11ShaderResourceView* Ak1 = nullptr;
ID3D11ShaderResourceView* HA3 = nullptr;
ID3D11ShaderResourceView* AR3 = nullptr;
ID3D11ShaderResourceView* FLARE = nullptr;
ID3D11ShaderResourceView* BG3 = nullptr;
ID3D11ShaderResourceView* DROP = nullptr;
ID3D11ShaderResourceView* AID = nullptr;
ID3D11ShaderResourceView* KID = nullptr;
ID3D11ShaderResourceView* X0 = nullptr;
ID3D11ShaderResourceView* M54 = nullptr;
ID3D11ShaderResourceView* X10 = nullptr;
ID3D11ShaderResourceView* X5 = nullptr;
ID3D11ShaderResourceView* KOR = nullptr;
ID3D11ShaderResourceView* BSC = nullptr;
ID3D11ShaderResourceView* DP1 = nullptr;
ID3D11ShaderResourceView* M71 = nullptr;
ID3D11ShaderResourceView* Imagehh = nullptr;
ID3D11ShaderResourceView* Drop = nullptr;
ID3D11ShaderResourceView* AquaRail_1_Citems = nullptr;
ID3D11ShaderResourceView* Bandage_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_9mm_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_12Guage_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_45ACP_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_300Magnum_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_556mm_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_762mm_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_Bolt_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Ammo_Flare_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Large_E_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Large_EQ_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Large_Q_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Mid_E_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Mid_EQ_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Mid_Q_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Sniper_E_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Sniper_EQ_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_DJ_Sniper_Q_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Grenade_Apple_Weapon_Wrapper_items = nullptr;
ID3D11ShaderResourceView* BP_Grenade_Burn_Citems = nullptr;
ID3D11ShaderResourceView* BP_Grenade_Shoulei_Citems = nullptr;
ID3D11ShaderResourceView* BP_Grenade_Smoke_Citems = nullptr;
ID3D11ShaderResourceView* BP_MachineGun_MP5K_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_MachineGun_PP19_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_MachineGun_TommyGun_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_MachineGun_UMP9_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_MachineGun_Uzi_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_MachineGun_Vector_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_2X_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_3X_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_4X_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_6X_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_8X_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_HD_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_QX_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_MZJ_SideRMR_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Other_CrossBow_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Other_DP28_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Other_M249_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_DesertEagle_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_Flaregun_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_P18C_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_P92_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_P1911_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_R45_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_R1895_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Pistol_Vz61_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Choke_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_DuckBill_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Large_Compensator_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Large_FlashHider_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Large_Suppressor_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Mid_Compensator_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Mid_FlashHider_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Mid_Suppressor_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Sniper_Compensator_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Sniper_FlashHider_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QK_Sniper_Suppressor_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QT_A_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QT_Sniper_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_QT_UZI_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_AKM_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_AUG_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_G36_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_Groza_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_M16A4_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_M416_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_M762_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_Mk47_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_QBZ_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Rifle_SCAR_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_ShotGun_DP12_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_ShotGun_S12K_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_ShotGun_S686_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_ShotGun_S1897_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_ShotGun_SawedOff_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_AWM_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_Kar98k_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_Mini14_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_QBU_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_SKS_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_SLR_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_VSS_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_Win94_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* BP_VH_Buggy_2_Citems = nullptr;
ID3D11ShaderResourceView* BP_VH_Tuk_1_Citems = nullptr;
ID3D11ShaderResourceView* BP_WB_Angled_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WB_HalfGrip_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WB_Lasersight_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WB_LightGrip_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WB_ThumbGrip_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WB_Vertical_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WEP_Cowbar_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WEP_Machete_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WEP_Mk14_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WEP_Pan_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_WEP_Sickle_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_ZDD_Crossbow_Q_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* BP_ZDD_Sniper_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* Drink_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* Firstaid_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* FirstAidbox_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* GasCan_Destructible_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* Injection_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* LadaNiva_01_Citems = nullptr;
ID3D11ShaderResourceView* Mirado_close_1_Citems = nullptr;
ID3D11ShaderResourceView* Mirado_open_1_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_01_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_02_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Armor_Lv1_B_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Armor_Lv2_B_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Armor_Lv3_B_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Bag_Lv1_B_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Bag_Lv2_B_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Bag_Lv3_B_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Ghillie_1_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Ghillie_2_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Ghillie_4_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Helmet_Lv2_B_Citems = nullptr;
ID3D11ShaderResourceView* PickUp_BP_Helmet_Lv3_B_Citems = nullptr;
ID3D11ShaderResourceView* Pills_Pickup_Citems = nullptr;
ID3D11ShaderResourceView* Rony_01_Citems = nullptr;
ID3D11ShaderResourceView* VH_BRDM_Citems = nullptr;
ID3D11ShaderResourceView* VH_Dacia_2_Citems = nullptr;
ID3D11ShaderResourceView* VH_MiniBus_01_Citems = nullptr;
ID3D11ShaderResourceView* VH_Motorcycle_1_Citems = nullptr;
ID3D11ShaderResourceView* VH_MotorcycleCart_1_Citems = nullptr;
ID3D11ShaderResourceView* VH_PG117_Citems = nullptr;
ID3D11ShaderResourceView* VH_Scooter_Citems = nullptr;
ID3D11ShaderResourceView* VH_Snowbike_Citems = nullptr;
ID3D11ShaderResourceView* VH_Snowmobile_Citems = nullptr;
ID3D11ShaderResourceView* VH_UAZ01_Citems = nullptr;
ID3D11ShaderResourceView* VH_UAZ02_Citems = nullptr;
ID3D11ShaderResourceView* VH_UAZ03_Citems = nullptr;
ID3D11ShaderResourceView* BP_Sniper_M24_Wrapper_Citems = nullptr;
ID3D11ShaderResourceView* PlayerDeadInventoryBox_Citems = nullptr;

#pragma endregion
namespace Settings
{
	static int Tab = 5;
}

bool watermark = true;
int currIndex;
float popcorn = 0.5f;
float popcorn2 = 0.450f;
ImVec4 colorr;
int Emu_Int = 0;
int item_current_Emu = 0;
int currentengine = 0;
int item_current_Aim = 0;

int skelesec = 0;
//  (DX11::pDevice, &logo, sizeof(logo), 462, 462, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &logggo);
ImVec4 to_vec4(float r, float g, float b, float a)
{
	return ImVec4(r / 255.0, g / 255.0, b / 255.0, a / 255.0);


}

void DrawImage(ID3D11ShaderResourceView* img, int x, int y, int sizex, int sizey)
{
	ImGui::GetOverlayDrawList()->AddImage(img, ImVec2(x, y), ImVec2(x + sizex, y + sizey));
}
ID3D11ShaderResourceView* photo = nullptr;

void InitImGuis()
{
	D3DX11_IMAGE_LOAD_INFO info;
	ID3DX11ThreadPump* pump{ nullptr };
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AirDrop, sizeof(AirDrop), &info, pump, &Drop, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Rifle_M416_Wrapper_C, sizeof(BP_Rifle_M416_Wrapper_C), &info, pump, &BP_Rifle_M416_Wrapper_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Rifle_AKM_Wrapper_C, sizeof(BP_Rifle_AKM_Wrapper_C), &info, pump, &BP_Rifle_AKM_Wrapper_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Rifle_SCAR_Wrapper_C, sizeof(BP_Rifle_SCAR_Wrapper_C), &info, pump, &BP_Rifle_SCAR_Wrapper_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Sniper_M24_Wrapper_C, sizeof(BP_Sniper_M24_Wrapper_C), &info, pump, &BP_Sniper_M24_Wrapper_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Sniper_Kar98k_Wrapper_C, sizeof(BP_Sniper_Kar98k_Wrapper_C), &info, pump, &BP_Sniper_Kar98k_Wrapper_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Pistol_Flaregun_Wrapper_C, sizeof(BP_Pistol_Flaregun_Wrapper_C), &info, pump, &BP_Pistol_Flaregun_Wrapper_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Ammo_Flare_Pickup_C, sizeof(BP_Ammo_Flare_Pickup_C), &info, pump, &BP_Ammo_Flare_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PickUp_BP_Armor_Lv3_B_C, sizeof(PickUp_BP_Armor_Lv3_B_C), &info, pump, &PickUp_BP_Armor_Lv3_B_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PickUp_BP_Bag_Lv3_B_C, sizeof(PickUp_BP_Bag_Lv3_B_C), &info, pump, &PickUp_BP_Bag_Lv3_B_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PickUp_BP_Helmet_Lv3_B_C, sizeof(PickUp_BP_Helmet_Lv3_B_C), &info, pump, &PickUp_BP_Helmet_Lv3_B_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FirstAidbox_Pickup_C, sizeof(FirstAidbox_Pickup_C), &info, pump, &FirstAidbox_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Firstaid_Pickup_C, sizeof(Firstaid_Pickup_C), &info, pump, &Firstaid_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Pills_Pickup_C, sizeof(Pills_Pickup_C), &info, pump, &Pills_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Drink_Pickup_C, sizeof(Drink_Pickup_C), &info, pump, &Drink_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Injection_Pickup_C, sizeof(Injection_Pickup_C), &info, pump, &Injection_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_MZJ_2X_Pickup_C, sizeof(BP_MZJ_2X_Pickup_C), &info, pump, &BP_MZJ_2X_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_MZJ_3X_Pickup_C, sizeof(BP_MZJ_3X_Pickup_C), &info, pump, &BP_MZJ_3X_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_MZJ_4X_Pickup_C, sizeof(BP_MZJ_4X_Pickup_C), &info, pump, &BP_MZJ_4X_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_MZJ_6X_Pickup_C, sizeof(BP_MZJ_6X_Pickup_C), &info, pump, &BP_MZJ_6X_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_MZJ_8X_Pickup_C, sizeof(BP_MZJ_8X_Pickup_C), &info, pump, &BP_MZJ_8X_Pickup_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Grenade_Shoulei_C, sizeof(BP_Grenade_Shoulei_C), &info, pump, &BP_Grenade_Shoulei_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Grenade_Burn_C, sizeof(BP_Grenade_Burn_C), &info, pump, &BP_Grenade_Burn_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Grenade_Smoke_C, sizeof(BP_Grenade_Smoke_C), &info, pump, &BP_Grenade_Smoke_Citems, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BP_Other_M249_Wrapper_C, sizeof(BP_Other_M249_Wrapper_C), &info, pump, &BP_Other_M249_Wrapper_Citems, 0);

	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Photoo, sizeof(Photoo), &info, pump, &photo, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Photoogh, sizeof(Photoogh), &info, pump, &Imagehh, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Sides, sizeof(Sides), &info, pump, &SideG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BaseLO, sizeof(BaseLO), &info, pump, &BaseG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MEGAAA, sizeof(MEGAAA), &info, pump, &MEGAAAA, 0);

	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AL, sizeof(AL), &info, pump, &ALFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DZ, sizeof(DZ), &info, pump, &DZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AS, sizeof(AS), &info, pump, &ASFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AD, sizeof(AD), &info, pump, &ADFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AO, sizeof(AO), &info, pump, &AOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AI, sizeof(AI), &info, pump, &AIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AG, sizeof(AG), &info, pump, &AGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AR, sizeof(AR), &info, pump, &ARFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AM, sizeof(AM), &info, pump, &AMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AW, sizeof(AW), &info, pump, &AWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AU, sizeof(AU), &info, pump, &AUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AT, sizeof(AT), &info, pump, &ATFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AZ, sizeof(AZ), &info, pump, &AZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BS, sizeof(BS), &info, pump, &BSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BH, sizeof(BH), &info, pump, &BHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BD, sizeof(BD), &info, pump, &BDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BB, sizeof(BB), &info, pump, &BBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BY, sizeof(BY), &info, pump, &BYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BE, sizeof(BE), &info, pump, &BEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BZ, sizeof(BZ), &info, pump, &BZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BJ, sizeof(BJ), &info, pump, &BJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BM, sizeof(BM), &info, pump, &BMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BT, sizeof(BT), &info, pump, &BTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BO, sizeof(BO), &info, pump, &BOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BA, sizeof(BA), &info, pump, &BAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BW, sizeof(BW), &info, pump, &BWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BV, sizeof(BV), &info, pump, &BVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IO, sizeof(IO), &info, pump, &BRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IO, sizeof(IO), &info, pump, &IOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BN, sizeof(BN), &info, pump, &BNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BG, sizeof(BG), &info, pump, &BGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BF, sizeof(BF), &info, pump, &BFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BI, sizeof(BI), &info, pump, &BIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CV, sizeof(CV), &info, pump, &CVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KH, sizeof(KH), &info, pump, &KHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CM, sizeof(CM), &info, pump, &CMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CA, sizeof(CA), &info, pump, &CAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KY, sizeof(KY), &info, pump, &KYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CF, sizeof(CF), &info, pump, &CFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TD, sizeof(TD), &info, pump, &TDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CL, sizeof(CL), &info, pump, &CLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CN, sizeof(CN), &info, pump, &CNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CX, sizeof(CX), &info, pump, &CXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CC, sizeof(CC), &info, pump, &CCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CO, sizeof(CO), &info, pump, &COFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KM, sizeof(KM), &info, pump, &KMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CD, sizeof(CD), &info, pump, &CDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CG, sizeof(CG), &info, pump, &CGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CK, sizeof(CK), &info, pump, &CKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CR, sizeof(CR), &info, pump, &CRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HR, sizeof(HR), &info, pump, &HRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CU, sizeof(CU), &info, pump, &CUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CW, sizeof(CW), &info, pump, &CWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CY1, sizeof(CY1), &info, pump, &CYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CZ, sizeof(CZ), &info, pump, &CZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CI, sizeof(CI), &info, pump, &CIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DK, sizeof(DK), &info, pump, &DKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DJ, sizeof(DJ), &info, pump, &DJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DM, sizeof(DM), &info, pump, &DMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DO, sizeof(DO), &info, pump, &DOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EC, sizeof(EC), &info, pump, &ECFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EG, sizeof(EG), &info, pump, &EGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SV, sizeof(SV), &info, pump, &SVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GQ, sizeof(GQ), &info, pump, &GQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ER, sizeof(ER), &info, pump, &ERFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EE, sizeof(EE), &info, pump, &EEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SZ, sizeof(SZ), &info, pump, &SZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ET, sizeof(ET), &info, pump, &ETFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FK, sizeof(FK), &info, pump, &FKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FO, sizeof(FO), &info, pump, &FOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FJ, sizeof(FJ), &info, pump, &FJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FI, sizeof(FI), &info, pump, &FIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FR, sizeof(FR), &info, pump, &FRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GF, sizeof(GF), &info, pump, &GFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PF, sizeof(PF), &info, pump, &PFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TF, sizeof(TF), &info, pump, &TFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GA, sizeof(GA), &info, pump, &GAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GM, sizeof(GM), &info, pump, &GMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GE, sizeof(GE), &info, pump, &GEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DE, sizeof(DE), &info, pump, &DEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GH, sizeof(GH), &info, pump, &GHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LY, sizeof(LY), &info, pump, &LYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LI, sizeof(LI), &info, pump, &LIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LT, sizeof(LT), &info, pump, &LTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LU, sizeof(LU), &info, pump, &LUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MO, sizeof(MO), &info, pump, &MOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MG, sizeof(MG), &info, pump, &MGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MW, sizeof(MW), &info, pump, &MWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MY, sizeof(MY), &info, pump, &MYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MV, sizeof(MV), &info, pump, &MVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ML, sizeof(ML), &info, pump, &MLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MT, sizeof(MT), &info, pump, &MTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MH, sizeof(MH), &info, pump, &MHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MQ, sizeof(MQ), &info, pump, &MQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MR, sizeof(MR), &info, pump, &MRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MU, sizeof(MU), &info, pump, &MUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, YT, sizeof(YT), &info, pump, &YTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MX, sizeof(MX), &info, pump, &MXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FM, sizeof(FM), &info, pump, &FMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MD, sizeof(MD), &info, pump, &MDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MC, sizeof(MC), &info, pump, &MCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MN, sizeof(MN), &info, pump, &MNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ME, sizeof(ME), &info, pump, &MEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MS, sizeof(MS), &info, pump, &MSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MA, sizeof(MA), &info, pump, &MAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MZ, sizeof(MZ), &info, pump, &MZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MM, sizeof(MM), &info, pump, &MMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NA, sizeof(NA), &info, pump, &NAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NR, sizeof(NR), &info, pump, &NRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GI, sizeof(GI), &info, pump, &GIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GR, sizeof(GR), &info, pump, &GRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GL, sizeof(GL), &info, pump, &GLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GD, sizeof(GD), &info, pump, &GDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GP, sizeof(GP), &info, pump, &GPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GU, sizeof(GU), &info, pump, &GUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GT, sizeof(GT), &info, pump, &GTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GG, sizeof(GG), &info, pump, &GGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GN, sizeof(GN), &info, pump, &GNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GW, sizeof(GW), &info, pump, &GWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GY, sizeof(GY), &info, pump, &GYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HT, sizeof(HT), &info, pump, &HTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HM, sizeof(HM), &info, pump, &HMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VA, sizeof(VA), &info, pump, &VAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HN, sizeof(HN), &info, pump, &HNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HK, sizeof(HK), &info, pump, &HKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HU, sizeof(HU), &info, pump, &HUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JM, sizeof(JM), &info, pump, &JMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, G1, sizeof(G1), &info, pump, &G1FLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JP, sizeof(JP), &info, pump, &JPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JE, sizeof(JE), &info, pump, &JEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JO, sizeof(JO), &info, pump, &JOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KZ, sizeof(KZ), &info, pump, &KZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KE, sizeof(KE), &info, pump, &KEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KI, sizeof(KI), &info, pump, &KIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KP, sizeof(KP), &info, pump, &KPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KR, sizeof(KR), &info, pump, &KRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KW, sizeof(KW), &info, pump, &KWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KG, sizeof(KG), &info, pump, &KGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LA, sizeof(LA), &info, pump, &LAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LV, sizeof(LV), &info, pump, &LVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LB, sizeof(LB), &info, pump, &LBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LS, sizeof(LS), &info, pump, &LSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LR, sizeof(LR), &info, pump, &LRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TR, sizeof(TR), &info, pump, &TRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TM, sizeof(TM), &info, pump, &TMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TC, sizeof(TC), &info, pump, &TCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TV, sizeof(TV), &info, pump, &TVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UG, sizeof(UG), &info, pump, &UGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UA, sizeof(UA), &info, pump, &UAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AE, sizeof(AE), &info, pump, &AEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, US, sizeof(US), &info, pump, &GBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, US, sizeof(US), &info, pump, &USFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UY, sizeof(UY), &info, pump, &UYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UZ, sizeof(UZ), &info, pump, &UZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VU, sizeof(VU), &info, pump, &VUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VE, sizeof(VE), &info, pump, &VEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VN, sizeof(VN), &info, pump, &VNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VG, sizeof(VG), &info, pump, &VGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VI, sizeof(VI), &info, pump, &VIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, WF, sizeof(WF), &info, pump, &WFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, YE, sizeof(YE), &info, pump, &YEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZM, sizeof(ZM), &info, pump, &ZMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZW, sizeof(ZW), &info, pump, &ZWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AX, sizeof(AX), &info, pump, &AXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IS, sizeof(IS), &info, pump, &ISFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IN1, sizeof(IN1), &info, pump, &INFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ID, sizeof(ID), &info, pump, &IDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IR, sizeof(IR), &info, pump, &IRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IQ, sizeof(IQ), &info, pump, &IQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IE, sizeof(IE), &info, pump, &IEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IM, sizeof(IM), &info, pump, &IMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IL, sizeof(IL), &info, pump, &ILFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IT, sizeof(IT), &info, pump, &ITFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NP, sizeof(NP), &info, pump, &NPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NL, sizeof(NL), &info, pump, &NLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NC, sizeof(NC), &info, pump, &NCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NZ, sizeof(NZ), &info, pump, &NZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NI, sizeof(NI), &info, pump, &NIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NE, sizeof(NE), &info, pump, &NEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NG, sizeof(NG), &info, pump, &NGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NU, sizeof(NU), &info, pump, &NUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NF, sizeof(NF), &info, pump, &NFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MP, sizeof(MP), &info, pump, &MPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NO, sizeof(NO), &info, pump, &NOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PK, sizeof(PK), &info, pump, &PKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PW, sizeof(PW), &info, pump, &PWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PS, sizeof(PS), &info, pump, &PSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PA, sizeof(PA), &info, pump, &PAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PG, sizeof(PG), &info, pump, &PGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PY, sizeof(PY), &info, pump, &PYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PE, sizeof(PE), &info, pump, &PEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PH, sizeof(PH), &info, pump, &PHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PN, sizeof(PN), &info, pump, &PNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PL, sizeof(PL), &info, pump, &PLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PT, sizeof(PT), &info, pump, &PTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PR, sizeof(PR), &info, pump, &PRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, QA, sizeof(QA), &info, pump, &QAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MK, sizeof(MK), &info, pump, &MKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RO, sizeof(RO), &info, pump, &ROFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RU, sizeof(RU), &info, pump, &RUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RW, sizeof(RW), &info, pump, &RWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RE, sizeof(RE), &info, pump, &REFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BL, sizeof(BL), &info, pump, &BLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SH, sizeof(SH), &info, pump, &SHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KN, sizeof(KN), &info, pump, &KNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LC, sizeof(LC), &info, pump, &LCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MF, sizeof(MF), &info, pump, &MFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PM, sizeof(PM), &info, pump, &PMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VC, sizeof(VC), &info, pump, &VCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, WS, sizeof(WS), &info, pump, &WSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SM, sizeof(SM), &info, pump, &SMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ST, sizeof(ST), &info, pump, &STFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SA, sizeof(SA), &info, pump, &SAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SN, sizeof(SN), &info, pump, &SNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RS, sizeof(RS), &info, pump, &RSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SC, sizeof(SC), &info, pump, &SCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SL, sizeof(SL), &info, pump, &SLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SG, sizeof(SG), &info, pump, &SGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SX, sizeof(SX), &info, pump, &SXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SK, sizeof(SK), &info, pump, &SKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SI, sizeof(SI), &info, pump, &SIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SB, sizeof(SB), &info, pump, &SBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SO, sizeof(SO), &info, pump, &SOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZA, sizeof(ZA), &info, pump, &ZAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GS, sizeof(GS), &info, pump, &GSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SS, sizeof(SS), &info, pump, &SSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LK, sizeof(LK), &info, pump, &LKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SD, sizeof(SD), &info, pump, &SDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SR, sizeof(SR), &info, pump, &SRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SJ, sizeof(SJ), &info, pump, &SJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SE, sizeof(SE), &info, pump, &SEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CH, sizeof(CH), &info, pump, &CHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SY, sizeof(SY), &info, pump, &SYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TW, sizeof(TW), &info, pump, &TWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TJ, sizeof(TJ), &info, pump, &TJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TZ, sizeof(TZ), &info, pump, &TZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TH, sizeof(TH), &info, pump, &THFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TL, sizeof(TL), &info, pump, &TLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TG, sizeof(TG), &info, pump, &TGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TK, sizeof(TK), &info, pump, &TKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TO, sizeof(TO), &info, pump, &TOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TT, sizeof(TT), &info, pump, &TTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TN, sizeof(TN), &info, pump, &TNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, M24, sizeof(M24), &info, pump, &M54, 0);
	Sleep(500);
}
RGBA floattod3d(float Col[])
{
	RGBA ret = { 0 };
	ret.R = (Col[0] * 255);
	ret.G = (Col[1] * 255);
	ret.B = (Col[2] * 255);
	ret.A = (Col[3] * 255);
	return ret;
}
std::wstring s2ws(const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}
std::string GetCurrentDirectory()
{
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	std::string::size_type pos = std::string(buffer).find_last_of("\\/");
	return std::string(buffer).substr(0, pos);
}
inline bool FileExist(const std::string& name) {
	if (FILE* file = fopen(name.c_str(), "r")) {
		fclose(file);
		return true;
	}
	else {
		return false;
	}
}
void Esp::LoadConfig(std::string Path) {
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	//	if (rc < 0) { std::cout << "File not found"; };
	if (FileExist(Path))
	{
		bool State = ini.GetBoolValue("Key", "UserKeyState");
		if (State == true)
		{
			std::string Key = ini.GetValue("Key", "UserKey");
			if (Key != "")
			{
				strcpy(str1, Key.c_str());
				SaveUsers = true;
			}

		}

	}
	/* if (ini.GetValue("Key", "UserKey")=="123")
	 {

	 }*/
}

void WriteConfig(std::string Path, std::string Key, bool State) {
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	if (rc < 0) {
		//	std::cout << "File not found";
	};
	if (State == true)
	{
		ini.SetBoolValue("Key", "UserKeyState", true);
	}
	else
	{
		ini.SetBoolValue("Key", "UserKeyState", false);
	}
	ini.SetValue("Key", "UserKey", Key.c_str());

	ini.SaveFile(Path.c_str());
}

bool dirExists(const std::string& dirName_in)
{
	DWORD ftyp = GetFileAttributesA(dirName_in.c_str());
	if (ftyp == INVALID_FILE_ATTRIBUTES)
		return false;  //something is wrong with your path!

	if (ftyp & FILE_ATTRIBUTE_DIRECTORY)
		return true;   // this is a directory!

	return false;    // this is not a directory!
}

void WriteResToDisk(std::string PathFile, LPWSTR File_WITHARG)
{
	HRSRC myResource = ::FindResource(NULL, File_WITHARG, RT_RCDATA);
	unsigned int myResourceSize = ::SizeofResource(NULL, myResource);
	HGLOBAL myResourceData = ::LoadResource(NULL, myResource);
	void* pMyExecutable = ::LockResource(myResourceData);
	std::ofstream f(PathFile, std::ios::out | std::ios::binary);
	f.write((char*)pMyExecutable, myResourceSize);
	f.close();
}
static void HelpMarker(const char* desc)
{
	ImGui::TextDisabled("(?)");
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted(desc);
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}
}




bool ProcessInlineHexColor(const char* start, const char* end, ImVec4& color)
{
	const int hexCount = (int)(end - start);
	if (hexCount == 6 || hexCount == 8)
	{
		char hex[9];
		strncpy(hex, start, hexCount);
		hex[hexCount] = 0;

		unsigned int hexColor = 0;
		if (sscanf(hex, "%x", &hexColor) > 0)
		{
			color.x = static_cast<float>((hexColor & 0x00FF0000) >> 16) / 255.0f;
			color.y = static_cast<float>((hexColor & 0x0000FF00) >> 8) / 255.0f;
			color.z = static_cast<float>((hexColor & 0x000000FF)) / 255.0f;
			color.w = 1.0f;

			if (hexCount == 8)
			{
				color.w = static_cast<float>((hexColor & 0xFF000000) >> 24) / 255.0f;
			}

			return true;
		}
	}

	return false;
}

const char ColorMarkerStart = '{';
const char ColorMarkerEnd = '}';

void TextWithColors(const char* fmt, ...)
{
	char tempStr[4096];

	va_list argPtr;
	va_start(argPtr, fmt);
	_vsnprintf(tempStr, sizeof(tempStr), fmt, argPtr);
	va_end(argPtr);
	tempStr[sizeof(tempStr) - 1] = '\0';

	bool pushedColorStyle = false;
	const char* textStart = tempStr;
	const char* textCur = tempStr;
	while (textCur < (tempStr + sizeof(tempStr)) && *textCur != '\0')
	{
		if (*textCur == ColorMarkerStart)
		{
			// Print accumulated text
			if (textCur != textStart)
			{
				ImGui::TextUnformatted(textStart, textCur);
				ImGui::SameLine(0.0f, 0.0f);
			}

			// Process color code
			const char* colorStart = textCur + 1;
			do
			{
				++textCur;
			} while (*textCur != '\0' && *textCur != ColorMarkerEnd);

			// Change color
			if (pushedColorStyle)
			{
				ImGui::PopStyleColor();
				pushedColorStyle = false;
			}

			ImVec4 textColor;
			if (ProcessInlineHexColor(colorStart, textCur, textColor))
			{
				ImGui::PushStyleColor(ImGuiCol_Text, textColor);
				pushedColorStyle = true;
			}

			textStart = textCur + 1;
		}
		else if (*textCur == '\n')
		{
			// Print accumulated text an go to next line
			ImGui::TextUnformatted(textStart, textCur);
			textStart = textCur + 1;
		}

		++textCur;
	}

	if (textCur != textStart)
	{
		ImGui::TextUnformatted(textStart, textCur);
	}
	else
	{
		ImGui::NewLine();
	}

	if (pushedColorStyle)
	{
		ImGui::PopStyleColor();
	}
}
// i think thiscode problem wait
ID3D11Device* g_pd3dDevice = nullptr;

bool LoadTextureFromFile(const char* filename, ID3D11ShaderResourceView** out_srv, int* out_width, int* out_height)
{
	// Load from disk into a raw RGBA buffer
	int image_width = 0;
	int image_height = 0;
	unsigned char* image_data = stbi_load(filename, &image_width, &image_height, NULL, 4);
	if (image_data == NULL)
		return false;

	// Create texture
	D3D11_TEXTURE2D_DESC desc;
	ZeroMemory(&desc, sizeof(desc));
	desc.Width = image_width;
	desc.Height = image_height;
	desc.MipLevels = 1;
	desc.ArraySize = 1;
	desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	desc.SampleDesc.Count = 1;
	desc.Usage = D3D11_USAGE_DEFAULT;
	desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
	desc.CPUAccessFlags = 0;

	ID3D11Texture2D* pTexture = NULL;
	D3D11_SUBRESOURCE_DATA subResource;
	subResource.pSysMem = image_data;
	subResource.SysMemPitch = desc.Width * 4;
	subResource.SysMemSlicePitch = 0;
	g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);

	// Create texture view
	D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
	ZeroMemory(&srvDesc, sizeof(srvDesc));
	srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
	srvDesc.Texture2D.MipLevels = desc.MipLevels;
	srvDesc.Texture2D.MostDetailedMip = 0;
	g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, out_srv);
	pTexture->Release();

	*out_width = image_width;
	*out_height = image_height;
	stbi_image_free(image_data);

	return true;
}


// ARGB

//SAVE COLOR//
VOID DrawMenu2()
{


	ImGui::SetNextWindowPos({ 2, (DX11Window::Height / 3.5f) - 80 });
	ImGui::SetNextWindowSize({ 149.5f,420.f });
	const float colPos = 220.0f;
	bool P = false;
	ImGui::Text;
	ImGui::Begin("HACK VIP", 0, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings);
	{
		ImGui::Image((void*)SideG, ImVec2(142.5f, 342));
		ImGui::SetCursorPosY(160.5f);
		ImGui::SetCursorPosX(18.0f);
		Setting::MagicBullet ? TextWithColors("{FF0000}  F5-{00FF0F}Magic Bullet{00FF0F}") : TextWithColors("{FF0000}  F5-{FFFFFF}Magic Bullet{FFFFFF}");
		ImGui::SetCursorPosX(18.0f);
		Setting::Item ? TextWithColors("{FF0000}  F4-{FFFFFF}Fight Mode {FFFFFF}") : TextWithColors("{FF0000}  F4-{00FF0F}Fight Mode {00FF0F}");
		ImGui::SetCursorPosX(18.0f);
		Setting::Vehicle ? TextWithColors("{FF0000} F6-{FFFFFF}Vehicles  {FFFFFF}") : TextWithColors("{FF0000} F6-{00FF0F}Vehicles  {00FF0F}");
		/*ImGui::SetCursorPosX(20.0f);
		Setting::SkipBots ? TextWithColors(ICON_FA_HAND_POINT_RIGHT"{FF0000} F7-{00FF0F}SkipBots  {00FF0F}") : TextWithColors(ICON_FA_HAND_POINT_RIGHT"{FF0000} F7-{FFFFFF}SkipBots {FFFFFF}");*/
		ImGui::SetCursorPosX(18.0f);
		Setting::ScreenX ? TextWithColors("{FF0000}  F9-{00FF0F}Anti screen  {00FF0F}") : TextWithColors("{FF0000}  F9-{FFFFFF}Anti screen  {FFFFFF}");
		/*ImGui::SetCursorPosX(20.0f);
		Setting::ScreenX ? TextWithColors(ICON_FA_HAND_POINT_RIGHT"{FF0000} F9-{00FF0F}Anti screen {00FF0F}") : TextWithColors(ICON_FA_HAND_POINT_RIGHT"{FF0000} F9-{FFFFFF}Anti screen {FFFFFF}");*/

		ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
		ImGui::SetCursorPosX(18.0f);
		ImGui::Text(" T:");
		ImGui::PopStyleColor();
		ImGui::SameLine();
		if (Setting::MagicBullet)
		{
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
			if (Setting::curraim == 0)
			{
				ImGui::Text("Head");
			}
			if (Setting::curraim == 1)
			{
				ImGui::Text("Neck");
			}
			if (Setting::curraim == 2)
			{
				ImGui::Text("Body");
			}
			if (Setting::curraim == 3)
			{
				ImGui::Text("Foot");
			}

			ImGui::PopStyleColor();

		}
		else
		{
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 0, 0, 255));
			ImGui::Text("  Not Active");
			ImGui::PopStyleColor();
		};

		ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
		ImGui::SetCursorPosX(18.0f);
		ImGui::Text(" Status:");
		ImGui::PopStyleColor();
		ImGui::SameLine();
		auto NetDriver = Utility::ReadMemoryEx<DWORD>(Data::UWorld + Offset::NetDriver);
		auto ServerConnection = Utility::ReadMemoryEx<DWORD>(NetDriver + Offset::ServerConnection);
		auto PlayerController = Utility::ReadMemoryEx<DWORD>(ServerConnection + Offset::PlayerController);
		auto LocalPlayer = Utility::ReadMemoryEx<DWORD>(PlayerController + Offset::AcknowledgedPawn);
		auto uMyobject = Utility::ReadMemoryEx<DWORD>(PlayerController + Offset::AcknowledgedPawn);
		if (uMyobject > 0)
		{
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
			ImGui::Text("In Game");
			ImGui::PopStyleColor();
		}
		else
		{
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 0, 0, 255));
			ImGui::Text("In Lobby");
			ImGui::PopStyleColor();
		}
		ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 128, 0, 255));
		ImGui::SetCursorPosX(11.0f);
		ImGui::Text("   ------------------------ ");
		ImGui::PopStyleColor();
		ImGui::SameLine();
		TextWithColors("");
		ImGui::SetCursorPosX(18.0f);
		
		ImGui::SetCursorPosX(18.0f);
		TextWithColors((""));
		ImGui::End();


	}

	if (GetAsyncKeyState(VK_F5) & 1)
	{
		Setting::Vehicle = !Setting::Vehicle;
	}
	if (GetAsyncKeyState(Setting::FightModeKey) & 1)
	{
		Setting::fightmode = !Setting::fightmode;
		Setting::deadbox = !Setting::deadbox;
	}
	if (GetAsyncKeyState(VK_F8) & 1)
	{

		Setting::SkipBots = !Setting::SkipBots;
	}
	if (GetAsyncKeyState(VK_F7) & 1)
	{
		Setting::IpadVeiw = !Setting::IpadVeiw;
	}
	if (GetAsyncKeyState(VK_F6) & 1)
	{
		Setting::antiscreen = !Setting::antiscreen;

	}
	if (GetAsyncKeyState(VK_F3) & 1)
	{
		Setting::MagicBullet = !Setting::MagicBullet;
		Setting::fovcircle = !Setting::fovcircle;
		Setting::SkipBots = !Setting::SkipBots;

		
	}
	if (GetAsyncKeyState(0x54) & 1) {
		Setting::curraim++;
		if (Setting::curraim == 3)
			Setting::curraim = 0;
		std::cout << Setting::curraim << std::endl;
	}
}

///Settings
int nsize = 13;
static int skelee = 0;
static int linne = 0;
static int hpbt = 0;
static int boxe = 0;
static int aimbp = 0;
int dissize = 13;
int hp = 12;
int vehisize = 13;
bool marco1 = false;
bool nothingm = true;
bool nothinga = false;
std::string name = "Test"; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = "QMrwkobsBE"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = "049ef3ccc038a016b5f2701e59abf514ca0533f5b6d876c32971c60a00132abe"; // app secret, the blurred text on licenses tab and other tabs
std::string version = "1.0"; // leave alone unless you've changed version on website
static char str0[25] = "";
std::string key;
std::string Ques = "";
KeyAuth::api KeyAuthApp(name, ownerid, secret, version);




VOID Esp::EspThread()
{
	InitImGuis();

	VECTOR3 Screen;
	INT Distance;
	INT EnemyCount;

	VECTOR3 HeadPos;
	VECTOR2 Head;
	VECTOR2 Chest;
	VECTOR2 Pelvis;
	VECTOR2 lSholder;
	VECTOR2 rSholder;
	VECTOR2 lElbow;
	VECTOR2 rElbow;
	VECTOR2 lWrist;
	VECTOR2 rWrist;
	VECTOR2 lThigh;
	VECTOR2 rThigh;
	VECTOR2 lKnee;
	VECTOR2 rKnee;
	VECTOR2 lAnkle;
	VECTOR2 rAnkle;
	std::string temp = "";
	std::string dist = "";
	string Text = "";
	string weapon = "";
	DWORD window_flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
	std::string Empty = "                           ";
	std::string expirydate = "N/A";

	KeyAuthApp.init();

	std::string licenseKey = "";
	std::ifstream InFile(("C:\\Windows\\MEGA VIP.ini"), std::ios::in);
	std::getline(InFile, licenseKey);
	strcpy_s(str1, licenseKey.c_str());


	RECT screen_rect;
	GetWindowRect(GetDesktopWindow(), &screen_rect);
	//	auto x = float(screen_rect.right - 400) / 2.f;
	//	auto y = float(screen_rect.bottom - 300) / 2.f;

	LoadConfig("‪C:MEGA VIP_Key.lic"); //‪C:\khni_Key.ini
	while (true)
	{
		Sleep(5);

		DX11::BeginDraw();
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		if (GetAsyncKeyState(Setting::EnableKey) & 1)
		{
			Setting::Aimbot = !Setting::Aimbot;
		}
		if (GetAsyncKeyState(Setting::EnableKeyf) & 1)
		{
			Setting::fightmode = !Setting::fightmode;
			Setting::deadbox = !Setting::deadbox;
		}
		if (GetAsyncKeyState(Setting::PositionKey) & 1)
		{
			if (Setting::curraim == 0)
			{

				Setting::curraim++;
			}
			else
			{

				Setting::curraim--;
			}


		}



		int my_image_width = 0;
		int my_image_height = 0;
		time_t rawtime = mktime(&KeyAuthApp.user_data.expiry);
		struct tm* timeinfo;
		timeinfo = localtime(&rawtime);

		if (Setting::ShowMenu)
		{
			LoadConfig("C:\\MEGA VIP_Key.lic");
			if (!login)
			{

				static auto Flags2 = ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
				static ImVec4 inactive = to_vec4(125, 0, 155, 255);
				ImGui::SetNextWindowSize({ 400.0f, 200.0f });
				if (ImGui::Begin("Form1", 0, Flags2))
				{
					ImGui::Image((void*)BaseG, ImVec2(400.0f, 180.0f));

					ImGui::SetCursorPosY(62.5f);
					ImGui::SetCursorPosX({ 42.f });
					ImGui::Text(" Key: " ICON_FA_KEYBOARD);
					ImGui::SameLine();
					ImGui::SetCursorPosY(60.0f);
					ImGui::InputText("###Key", str1, IM_ARRAYSIZE(str1));

					ImGui::SetCursorPosX({ 50.f });
					ImGui::SetCursorPosY(140.0f);
					if (ImGui::Button(" Login " ICON_FA_SIGN_IN, { 130.0f,23.0f }))
					{

						if (KeyAuthApp.license(str1))

						{


							login = true;
							Setting::ShowMenu2 = true;


						}
						else
						{

							exit(1);
							login = false;
						}

					}
					ImGui::SameLine();
					ImGui::SetCursorPosX({ 128.f });
					ImGui::SetCursorPosY(112.9f);
					if (ImGui::Button(" Get Free Key " ICON_FA_KEY, { 150.0f,23.0f }))
					{

						ShellExecute(NULL, L"open", L"https://discrd.gg/a6VFUr", NULL, NULL, SW_SHOWNORMAL);

					}
					ImGui::SetCursorPosX({ 230.f });
					if (ImGui::Button(" Telegram " ICON_FA_BOOK, { 130.0f,23.0f }))
					{

						ShellExecute(NULL, L"open", L"https://t.me/+qvz-k79qkNzc0", NULL, NULL, SW_SHOWNORMAL);


					}
					ImGui::SetCursorPosX({ 100.f });

					if (SaveUsers)
					{
						WriteConfig("C:\\MEGA VIP_Key.lic", str1, true);

					}
					else
					{
						WriteConfig("C:\\MEGA VIP_Key.lic", str1, false);

					}
					ImGui::End();
				}

			}


			if (login)
			{
				static auto Name = "Menu";
				static auto Flags = ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
				static ImVec4 active = to_vec4(255, 0, 103, 255);
				static ImVec4 inactive = to_vec4(125, 0, 155, 255);
				ImGui::SetNextWindowSize({ 650.f,550.f });
				if (ImGui::Begin("Form1", 0, Flags))

				{

					ImGui::Image((void*)MEGAAAA, ImVec2(650.f, 530.f));
					ImGui::SetCursorPosY(62.5f);
					ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 0, 0, 255));
					/*ImGui::SetCursorPos({ 260.f,23.0f });
					ImGui::Text("  HACK VIP");*/
					ImGui::SetCursorPos({ 260.f,5.f });
					/*	ImGui::Image((void*)salahlogo, ImVec2(145, 60));*/
					ImGui::PopStyleColor();
					ImGuiStyle& style = ImGui::GetStyle();
					auto FramePadding = style.FramePadding;
					style.FramePadding = ImVec2(6, 4);
					ImGui::SetCursorPos({ 55.f,95.f });
					ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 1 ? active : inactive);
					if (ImGui::Button(ICON_FA_NEWSPAPER "     New", { 90.f,25.f }))
					{
						Settings::Tab = 1;
					}
					ImGui::PopStyleColor(1);
					ImGui::SetCursorPos({ 170.f,95.f });
					ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 2 ? active : inactive);
					if (ImGui::Button(ICON_FA_EYE "   Visuals", { 90.f,25.f }))
					{
						Settings::Tab = 2;
					}
					ImGui::PopStyleColor(1);
					ImGui::SetCursorPos({ 280.f,95.f });
					ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 3 ? active : inactive);
					if (ImGui::Button(ICON_FA_CROSSHAIRS "     Safe", { 90.f,25.f }))
					{
						Settings::Tab = 3;
					}
					ImGui::PopStyleColor(1);
					ImGui::SetCursorPos({ 390.f,95.f });
					ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 4 ? active : inactive);
					if (ImGui::Button(ICON_FA_BAN"  Memory", { 90.f,25.f }))
					{
						Settings::Tab = 4;
					}
					ImGui::PopStyleColor(1);
					ImGui::SetCursorPos({ 500.f,95.f });
					ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 5 ? active : inactive);

					if (ImGui::Button(ICON_FA_COG "    Settings", { 90.f,25.f }))
					{
						Settings::Tab = 5;
					}
					ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 0, 0, 255));
					//std::string str = " https://salah-ahmed.com/";//THiNK TWiCe
					//ImGui::SetCursorPos({ 60.f,510.f });
					//ImGui::Text(XorStr("\n https://salah-ahmed.com/").c_str());
					ImGui::SetCursorPos({ 515.f,440.f });
					/*ImGui::Text("\n HACK VIP");*/
					ImGui::PopStyleColor(1);
					ImGui::PopStyleColor();
					{
						ImGui::SetNextWindowSize(ImVec2(640.0f, 550.0f));
						ImGui::SetCursorPos({ 55.f,145.0f });
						if (ImGui::BeginTabBar("HACK"))
						{
							if (Settings::Tab == 1)
							{
								ImGui::SetCursorPos({ 55.f,125.0f });
								ImGui::Text("  News: ");
								if (ImGui::BeginTabItem("  > News  "))
								{
									if (ImGui::BeginChild("###news", ImVec2(640, 360), false))
									{
										/*	ImGui::SetCursorPos({ 290.0f,10.0f });
											ImGui::Image((void*)my_texture, ImVec2(460, 460));*/
										ImGui::Spacing();
										ImGui::SetCursorPos({ 55.f,5.f });
										ImGui::Text("\n    Killer has been updated to latest Versoin 2.3");
										ImGui::SetCursorPos({ 55.f,35.f });
										ImGui::Text("\n   -Dear player, please play safely to preserve your account. ");
										ImGui::SetCursorPos({ 55.f,65.f });
										ImGui::Text("\n   - The option to leave is a risk on your responsibility, causing the 10-year ban");
										ImGui::SetCursorPos({ 55.f,95.f });
										ImGui::Text("\n Changelogy:");

										ImGui::SetCursorPos({ 55.f,125.f });
										ImGui::Text("\n  -Added Aimbot With Silent Aimbot (Magic Bullet)");
										ImGui::SetCursorPos({ 55.f,155.f });
										ImGui::Text("\n  -R Key For Refresh Magic Bullet");
										ImGui::SetCursorPos({ 55.f,185.f });
										ImGui::Text("\n  -Developed By Eng/Ahmed Ali");

										ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(128, 224, 0, 200));
										ImGui::SetCursorPos({ 55.f,260.f });
										ImGui::Text(XorStr(ICON_FA_EYE" \n Key Expires Date  :  %s").c_str(), asctime(timeinfo));
										ImGui::SetCursorPos({ 420.f,260.f });
										ImGui::Text(ICON_FA_EYE" \n %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
										ImGui::PopStyleColor();
										ImGui::SameLine();


										ImGui::EndChild();
									}

									ImGui::EndTabItem();
								}
							}
							if (Settings::Tab == 2)
							{
								ImGui::SetCursorPos({ 55.f,125.0f });
								ImGui::Text(" ESP (Extra Sensory Perception): ");

								if (ImGui::BeginTabItem("> Player ESP"))
								{
									if (ImGui::BeginChild("###player", ImVec2(600, 290), false))
									{
										ImGui::SetCursorPos({ 152.f,20.f });
										/*	 ImVec2(330, 330));*/
										ImGuiStyle& style = ImGui::GetStyle();
										style.FramePadding = ImVec2(4, 2);
										ImGui::SetCursorPos({ 60.f,25.0f });
										ImGui::Checkbox("Player", &Setting::pname);
										ImGui::SetCursorPos({ 100.f,25.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,25.0f });
										ImGui::ColorEdit4("pName", (float*)&nam, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,25.0f });
										ImGui::SliderInt("Name size", &Setting::nsize, 10, 50);


										ImGui::SetCursorPos({ 60.f,50.0f });
										ImGui::Checkbox("box", &Setting::pfullbox);
										ImGui::SetCursorPos({ 100.f,50.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,50.0f });
										ImGui::ColorEdit4("pFull box", (float*)&fullboxcolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,50.0f });
										ImGui::SliderFloat("box size", &Setting::pfullboxsize, 0.100f, 2.00f);


										ImGui::SetCursorPos({ 60.f,75.0f });
										ImGui::Checkbox("cbox", &Setting::pcorner);
										ImGui::SetCursorPos({ 100.f,75.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,75.0f });
										ImGui::ColorEdit4("pCorner Box", (float*)&cornerboxcolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,75.0f });
										ImGui::SliderFloat("Corner size", &Setting::pcornersize, 0.100f, 2.00f);

										ImGui::SetCursorPos({ 60.f,100.0f });
										ImGui::Checkbox("pline", &Setting::pline);
										ImGui::SetCursorPos({ 100.f,100.0f });
										ImGui::Text("");

										ImGui::SetCursorPos({ 560.f,100.0f });;
										ImGui::ColorEdit4("Pline", (float*)&playerline, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,100.0f });
										ImGui::SliderFloat("Lines size", &Setting::plinesize, 0.100f, 2.00f);

										ImGui::SetCursorPos({ 100.f,125.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,125.0f });
										ImGui::Checkbox("Bone", &Setting::playerBone);
										ImGui::SetCursorPos({ 560.f,125.0f });
										ImGui::ColorEdit4("Player Bone", (float*)&skelec, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,125.0f });
										ImGui::SliderFloat("Bone size", &Setting::pbonesize, 0.100f, 2.00f);


										ImGui::SetCursorPos({ 100.f,150.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,150.0f });
										ImGui::Checkbox("Healt", &Setting::phealth);
										ImGui::SetCursorPos({ 560.f,150.0f });
										ImGui::ColorEdit4("health", (float*)&health, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);


										ImGui::SetCursorPos({ 60.f,175.0f });
										ImGui::Checkbox("Player dist", &Setting::Distancee);
										ImGui::SetCursorPos({ 100.f,175.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,175.0f });
										ImGui::ColorEdit4("Player Dis", (float*)&enemy, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,175.0f });
										ImGui::SliderInt("Distance size", &Setting::dissize, 0, 25);


										ImGui::SetCursorPos({ 100.f,200.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,200.0f });
										if (ImGui::Checkbox("Flag Image :-", &Setting::Flag1))
										{
											if (Setting::Flag1)
											{
												Setting::Flag = false;
												Setting::Flag3 = true;
											}
											else
											{
												Setting::Flag = true;
												Setting::Flag3 = false;
											}
										}
										ImGui::SetCursorPos({ 100.f,225.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,225.0f });
										ImGui::ColorEdit4("Flag", (float*)&falg, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,225.0f });
										ImGui::SliderInt("Flag", &Setting::flag, 0, 25);
										ImGui::SetCursorPos({ 60.f,225.0f });
										if (ImGui::Checkbox("Flag Text :-", &Setting::Flag))
										{
											if (Setting::Flag)
											{
												Setting::Flag1 = false;
												Setting::Flag3 = false;
											}
											else
											{
												Setting::Flag1 = true;
												Setting::Flag3 = true;
											}
										}
										ImGui::SetCursorPos({ 60.f,250.0f });
										ImGui::Checkbox("Bot Name", &Setting::botname);
										ImGui::SetCursorPos({ 100.f,250.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,250.0f });
										ImGui::ColorEdit4("Bot", (float*)&bot, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

										ImGui::SetCursorPos({ 60.f,275.0f });
										ImGui::Checkbox("bline", &Setting::botline);
										ImGui::SetCursorPos({ 100.f,275.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,275.0f });
										ImGui::ColorEdit4("bline", (float*)&Botlinescolors, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,275.0f });
										ImGui::SliderFloat("Lines size", &Setting::blinesize, 0.100f, 2.00f);

										ImGui::SetCursorPos({ 60.f,300.0f });
										ImGui::Checkbox("Enemy Aiming", &Setting::aiming);
										ImGui::SetCursorPos({ 100.f,300.0f });
										ImGui::Text("");

										ImGui::SetCursorPos({ 60.f,325.0f });
										ImGui::Checkbox("BONE HEAD", &Setting::BONEHEAD);
										ImGui::SetCursorPos({ 100.f,325.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 560.f,325.0f });
										ImGui::ColorEdit4("BONEHEAD", (float*)&BONEHEADcolors, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

										ImGui::SetCursorPos({ 60.f,350.0f });
										ImGui::Checkbox("dots", &Setting::dots);
										ImGui::SetCursorPos({ 100.f,350.0f });
										ImGui::Text("");
										ImGui::SetCursorPosX({ 60.f });
										ImGui::Checkbox("Draw Radar", &Setting::radar);
										ImGui::SetCursorPosX({ 60.f });
										ImGui::Bullet(); ImGui::TextColored(ImVec4(255, 0, 0, 255), "Radar Settings");
										ImGui::Indent();
										ImGui::SetCursorPosX({ 60.f });
										ImGui::SliderInt("Radar Length", &Setting::RadarLength, 130.0f, 300.0f);
										ImGui::SetCursorPosX({ 60.f });
										ImGui::SliderInt("Radar Width", &Setting::RadarWidth, 130.0f, 300.0f);
										ImGui::Unindent();

										ImGui::EndChild();
									}
									ImGui::EndTabItem();
								}

								if (Setting::impitems)
								{
									if (ImGui::BeginTabItem("> Important Weapons"))
									{
										if (ImGui::BeginChild("###ar", ImVec2(600, 290), false))
										{
											ImGuiStyle& style = ImGui::GetStyle();

											style.FramePadding = ImVec2(4, 2);
											ImGui::SetCursorPos({ 152.f,20.f });
											/*		 ImVec2(330, 330));*/
											ImGui::SetCursorPos({ 60.f,15.0f });
											ImGui::Text(" > AR Rifle");

											ImGui::SetCursorPos({ 60.f,40.0f });
											ImGui::Checkbox("M416", &Setting::Esp_Item_M416);
											ImGui::SetCursorPos({ 100.f,40.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,40.0f });
											ImGui::ColorEdit4("M416", (float*)&m16, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,40.0f });
											ImGui::SliderInt("###11", &Setting::m16, 8, 50);

											ImGui::SetCursorPos({ 60.f,65.0f });
											ImGui::Checkbox("AKM", &Setting::Esp_Item_AKM);
											ImGui::SetCursorPos({ 100.f,65.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,65.0f });
											ImGui::ColorEdit4("AKM", (float*)&AKM, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,65.0f });
											ImGui::SliderInt("###13", &Setting::AKM, 8, 50);


											ImGui::SetCursorPos({ 60.f,90.0f });
											ImGui::Checkbox("SCAR-L", &Setting::Esp_Item_SCARL);
											ImGui::SetCursorPos({ 100.f,90.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,90.0f });
											ImGui::ColorEdit4("SCAR", (float*)&scarl, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,90.0f });
											ImGui::SliderInt("###12", &Setting::scarl, 8, 50);

											ImGui::SetCursorPos({ 60.f,115.0f });
											ImGui::Checkbox("M762", &Setting::Esp_Item_M762);
											ImGui::SetCursorPos({ 100.f,115.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,115.0f });
											ImGui::ColorEdit4("M762", (float*)&Esp_Item_M762_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,115.0f });
											ImGui::SliderInt("###16", &Setting::m762, 8, 50);


											ImGui::SetCursorPos({ 60.f,140.0f });
											ImGui::Checkbox("FAMAS", &Setting::Esp_Item_FAMAS);
											ImGui::SetCursorPos({ 100.f,140.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,140.0f });
											ImGui::ColorEdit4("FAMAS", (float*)&FAMAS, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,140.0f });
											ImGui::SliderInt("###FAMAS", &Setting::FAMAS, 8, 50);

											ImGui::SetCursorPos({ 60.f,165.0f });
											ImGui::Checkbox("Mk47-Mutant", &Setting::Esp_Item_Mk47Mutant);
											ImGui::SetCursorPos({ 100.f,165.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,165.0f });
											ImGui::ColorEdit4("Mk47-Mutant", (float*)&Esp_Item_Mk47Mutant_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,165.0f });
											ImGui::SliderInt("###34", &Setting::Mk47Mutant, 8, 50);

											ImGui::SetCursorPos({ 60.f,190.0f });
											ImGui::Checkbox("AUG", &Setting::Esp_Item_AUG);
											ImGui::SetCursorPos({ 100.f,190.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,190.0f });
											ImGui::ColorEdit4("AUG", (float*)&aug, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,190.0f });
											ImGui::SliderInt("###AUG", &Setting::aug, 8, 50);

											ImGui::SetCursorPos({ 60.f,215.0f });
											ImGui::Checkbox("Groza", &Setting::Esp_Item_Groza);
											ImGui::SetCursorPos({ 100.f,215.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,215.0f });
											ImGui::ColorEdit4("Groza", (float*)&GROZZA, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,215.0f });
											ImGui::SliderInt("###Groza", &Setting::GROZZA, 8, 50);

											ImGui::SetCursorPos({ 60.f,240.0f });
											ImGui::Checkbox("M16A4", &Setting::Esp_Item_M16A4);
											ImGui::SetCursorPos({ 100.f,240.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,240.0f });
											ImGui::ColorEdit4("M16A4", (float*)&Esp_Item_M16A4_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,240.0f });
											ImGui::SliderInt("###M16A4", &Setting::M16A4, 8, 50);

											ImGui::SetCursorPos({ 60.f,265.0f });
											ImGui::Checkbox("AN94", &Setting::Esp_Item_AN94);
											ImGui::SetCursorPos({ 100.f,265.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,265.0f });
											ImGui::ColorEdit4("AN94", (float*)&AN94, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,265.0f });
											ImGui::SliderInt("###AN94", &Setting::AN94, 8, 50);

											ImGui::SetCursorPos({ 60.f,290.0f });
											ImGui::Checkbox("G36C", &Setting::Esp_Item_G36C);
											ImGui::SetCursorPos({ 100.f,290.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,290.0f });
											ImGui::ColorEdit4("G36C", (float*)&Esp_Item_G36C_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,290.0f });
											ImGui::SliderInt("###22", &Setting::G36C, 8, 50);

											ImGui::SetCursorPos({ 60.f,315.0f });
											ImGui::Checkbox("QBZ", &Setting::Esp_Item_QBZ);
											ImGui::SetCursorPos({ 100.f,315.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,315.0f });
											ImGui::ColorEdit4("QBZ", (float*)&Esp_Item_QBZ_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,315.0f });
											ImGui::SliderInt("###23", &Setting::QBZ, 8, 50);


											ImGui::SetCursorPos({ 60.f,330.0f });
											ImGui::Text("> Sniper  Riffles");

											ImGui::SetCursorPos({ 60.f,355.0f });
											ImGui::Checkbox("AWM", &Setting::Esp_Item_Awm);
											ImGui::SetCursorPos({ 100.f,355.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,355.0f });
											ImGui::ColorEdit4("AMW", (float*)&AWM, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,355.0f });
											ImGui::SliderInt("###18", &Setting::AWM, 8, 50);

											ImGui::SetCursorPos({ 60.f,380.f });
											ImGui::Checkbox("M24", &Setting::Esp_Item_M24);
											ImGui::SetCursorPos({ 100.f,380.f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,380.f });
											ImGui::ColorEdit4("M24", (float*)&M24, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,380.f });
											ImGui::SliderInt("###19", &Setting::M24, 8, 50);

											ImGui::SetCursorPos({ 60.f,405.0f });
											ImGui::Checkbox("KAR98", &Setting::Esp_Item_Kar98k);
											ImGui::SetCursorPos({ 100.f,405.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,405.0f });
											ImGui::ColorEdit4("kar98", (float*)&kar98, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,405.0f });
											ImGui::SliderInt("###20", &Setting::kar98, 8, 50);

											ImGui::SetCursorPos({ 60.f,430.0f });
											ImGui::Checkbox("VSS", &Setting::Esp_Item_VSS);
											ImGui::SetCursorPos({ 100.f,430.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,430.0f });
											ImGui::ColorEdit4("VSS", (float*)&VSS, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,430.0f });
											ImGui::SliderInt("###VSS", &Setting::VSS, 8, 50);


											ImGui::SetCursorPos({ 60.f,455.0f });
											ImGui::Checkbox("Win94", &Setting::Esp_Item_Win94);
											ImGui::SetCursorPos({ 100.f,455.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,455.0f });
											ImGui::ColorEdit4("Win94", (float*)&Win94, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,455.0f });
											ImGui::SliderInt("###Win94", &Setting::Win94, 8, 50);

											ImGui::SetCursorPos({ 60.f,480.0f });
											ImGui::Checkbox("Mosin", &Setting::Esp_Item_Mosin);
											ImGui::SetCursorPos({ 100.f,480.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,480.0f });
											ImGui::ColorEdit4("Mosin", (float*)&mosin, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,480.0f });
											ImGui::SliderInt("###Mosin", &Setting::Mosin, 8, 50);

											ImGui::SetCursorPos({ 60.f,505.0f });
											ImGui::Checkbox("Mk14", &Setting::Esp_Item_Mk14);
											ImGui::SetCursorPos({ 100.f,505.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,505.0f });
											ImGui::ColorEdit4("Mk14", (float*)&Mk14, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,505.0f });
											ImGui::SliderInt("###Mk14", &Setting::Mk14, 8, 50);

											ImGui::SetCursorPos({ 60.f,530.0f });
											ImGui::Checkbox("Mk12", &Setting::Esp_Item_Mk12);
											ImGui::SetCursorPos({ 100.f,530.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,530.0f });
											ImGui::ColorEdit4("Mk12", (float*)&MK12, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,530.0f });
											ImGui::SliderInt("###Mk12", &Setting::Mk12, 8, 50);

											ImGui::SetCursorPos({ 60.f,555.0f });
											ImGui::Checkbox("QBU", &Setting::Esp_Item_QBU);
											ImGui::SetCursorPos({ 100.f,555.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,555.0f });
											ImGui::ColorEdit4("QBU", (float*)&Esp_Item_QBU_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,555.0f });
											ImGui::SliderInt("###24", &Setting::QBU, 8, 50);

											ImGui::SetCursorPos({ 60.f,580.0f });
											ImGui::Checkbox("SLR", &Setting::Esp_Item_SLR);
											ImGui::SetCursorPos({ 100.f,580.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,580.0f });
											ImGui::ColorEdit4("SLR", (float*)&Esp_Item_SLR_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,580.0f });
											ImGui::SliderInt("###25", &Setting::SLR, 8, 50);

											ImGui::SetCursorPos({ 60.f,605.0f });
											ImGui::Checkbox("SKS", &Setting::Esp_Item_SKS);
											ImGui::SetCursorPos({ 100.f,605.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,605.0f });
											ImGui::ColorEdit4("SKS", (float*)&Esp_Item_SKS_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,605.0f });
											ImGui::SliderInt("###26", &Setting::SKS, 8, 50);

											ImGui::SetCursorPos({ 60.f,630.0f });
											ImGui::Checkbox("Mini14", &Setting::Esp_Item_Mini14);
											ImGui::SetCursorPos({ 100.f,630.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,630.0f });
											ImGui::ColorEdit4("Mini14", (float*)&Esp_Item_Mini14_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,630.0f });
											ImGui::SliderInt("###27", &Setting::Mini14, 8, 50);

											ImGui::SetCursorPos({ 60.f,645.0f });
											ImGui::Text("> ShotGun Items");

											ImGui::SetCursorPos({ 60.f,670.0f });
											ImGui::Checkbox("DBS", &Setting::Esp_Item_DBS);
											ImGui::SetCursorPos({ 100.f,670.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,670.0f });
											ImGui::ColorEdit4("DBS", (float*)&DBS, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,670.0f });
											ImGui::SliderInt("###DBS", &Setting::DBS, 8, 50);

											ImGui::SetCursorPos({ 60.f,695.0f });
											ImGui::Checkbox("S12K", &Setting::Esp_Item_S12K);
											ImGui::SetCursorPos({ 100.f,695.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,695.0f });
											ImGui::ColorEdit4("S12K", (float*)&S12K, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,695.0f });
											ImGui::SliderInt("###S12K", &Setting::S12K, 8, 50);

											ImGui::SetCursorPos({ 60.f,720.0f });
											ImGui::Checkbox("S686", &Setting::Esp_Item_S686);
											ImGui::SetCursorPos({ 100.f,720.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,720.0f });
											ImGui::ColorEdit4("S686", (float*)&S686, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,720.0f });
											ImGui::SliderInt("###S686", &Setting::S686, 8, 50);

											ImGui::SetCursorPos({ 60.f,745.0f });
											ImGui::Checkbox("S1897", &Setting::Esp_Item_S1897);
											ImGui::SetCursorPos({ 100.f,745.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,745.0f });
											ImGui::ColorEdit4("S1897", (float*)&S1897, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,745.0f });
											ImGui::SliderInt("###S1897", &Setting::S1897, 8, 50);

											ImGui::SetCursorPos({ 60.f,770.0f });
											ImGui::Checkbox("SawedOff", &Setting::Esp_Item_SawedOff);
											ImGui::SetCursorPos({ 100.f,770.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,770.0f });
											ImGui::ColorEdit4("SawedOff", (float*)&SawedOff, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,770.0f });
											ImGui::SliderInt("###SawedOff", &Setting::SawedOff, 8, 50);


											ImGui::SetCursorPos({ 60.f,795.0f });
											ImGui::Checkbox("M1014", &Setting::Esp_Item_M1014);
											ImGui::SetCursorPos({ 100.f,795.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,795.0f });
											ImGui::ColorEdit4("M1014", (float*)&M1014, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,795.0f });
											ImGui::SliderInt("###M1014", &Setting::M1014, 8, 50);

											ImGui::SetCursorPos({ 60.f,810.0f });
											ImGui::Text("> MachineGun Items");

											ImGui::SetCursorPos({ 60.f,835.0f });
											ImGui::Checkbox("P90", &Setting::Esp_Item_P90);
											ImGui::SetCursorPos({ 100.f,835.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,835.0f });
											ImGui::ColorEdit4("P90", (float*)&P90, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,835.0f });
											ImGui::SliderInt("###P90", &Setting::P90, 8, 50);


											ImGui::SetCursorPos({ 60.f,860.0f });
											ImGui::Checkbox("PP19", &Setting::Esp_Item_PP19);
											ImGui::SetCursorPos({ 100.f,860.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,860.0f });
											ImGui::ColorEdit4("PP19", (float*)&Esp_Item_PP19_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,860.0f });
											ImGui::SliderInt("###28", &Setting::PP19, 8, 50);

											ImGui::SetCursorPos({ 60.f,885.0f });
											ImGui::Checkbox("Tommy Gun", &Setting::Esp_Item_TommyGun);
											ImGui::SetCursorPos({ 100.f,885.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,885.0f });
											ImGui::ColorEdit4("Tommy", (float*)&Esp_Item_TommyGun_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,885.0f });
											ImGui::SliderInt("###29", &Setting::TommyGun, 8, 50);

											ImGui::SetCursorPos({ 60.f,910.0f });
											ImGui::Checkbox("MP5K", &Setting::Esp_Item_MP5K);
											ImGui::SetCursorPos({ 100.f,910.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,910.0f });
											ImGui::ColorEdit4("MP5K", (float*)&Esp_Item_MP5K_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,910.0f });
											ImGui::SliderInt("###30", &Setting::MP5K, 8, 50);

											ImGui::SetCursorPos({ 60.f,935.0f });
											ImGui::Checkbox("UMP9", &Setting::Esp_Item_UMP9);
											ImGui::SetCursorPos({ 100.f,935.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,935.0f });
											ImGui::ColorEdit4("UMP9", (float*)&Esp_Item_UMP9_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,935.0f });
											ImGui::SliderInt("###31", &Setting::UMP9, 8, 50);

											ImGui::SetCursorPos({ 60.f,960.0f });
											ImGui::Checkbox("Vector", &Setting::Esp_Item_Vector);
											ImGui::SetCursorPos({ 100.f,960.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,960.0f });
											ImGui::ColorEdit4("Vector", (float*)&Esp_Item_Vector_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,960.0f });
											ImGui::SliderInt("###31", &Setting::Vector, 8, 50);

											ImGui::SetCursorPos({ 60.f,985.0f });
											ImGui::Checkbox("Uzi", &Setting::Esp_Item_Uzi);
											ImGui::SetCursorPos({ 100.f,985.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,985.0f });
											ImGui::ColorEdit4("Uzi", (float*)&Esp_Item_Uzi_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,985.0f });
											ImGui::SliderInt("###33", &Setting::Uzi, 8, 50);

											ImGui::SetCursorPos({ 60.f,1000.0f });
											ImGui::Text("> Elements of the requirements");


											ImGui::SetCursorPos({ 60.f,1025.0f });
											ImGui::Checkbox("Armor 1", &Setting::Esp_Item_Armor1);
											ImGui::SetCursorPos({ 100.f,1025.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1025.0f });
											ImGui::ColorEdit4("Armor 1", (float*)&Esp_Item_Armor1_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1025.0f });
											ImGui::SliderInt("###65", &Setting::Armor1, 8, 50);

											ImGui::SetCursorPos({ 60.f,1050.0f });
											ImGui::Checkbox("Armor 2", &Setting::Esp_Item_Armor2);
											ImGui::SetCursorPos({ 100.f,1050.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1050.0f });
											ImGui::ColorEdit4("Armor 2", (float*)&Esp_Item_Armor2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1050.0f });
											ImGui::SliderInt("###66", &Setting::Armor2, 8, 50);

											ImGui::SetCursorPos({ 60.f,1075.0f });
											ImGui::Checkbox("Armor 3", &Setting::Esp_Item_Armor3);
											ImGui::SetCursorPos({ 100.f,1075.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1075.0f });
											ImGui::ColorEdit4("Armor 3", (float*)&Esp_Item_Armor3_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1075.0f });
											ImGui::SliderInt("##A#61", &Setting::Armor3, 8, 50);

											ImGui::SetCursorPos({ 60.f,1100.0f });
											ImGui::Checkbox("Bag 1", &Setting::Esp_Item_Bag1);
											ImGui::SetCursorPos({ 100.f,1100.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1100.0f });
											ImGui::ColorEdit4("Bag 1", (float*)&Esp_Item_Bag1_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1100.0f });
											ImGui::SliderInt("###642", &Setting::Bag1, 8, 50);


											ImGui::SetCursorPos({ 60.f,1125.0f });
											ImGui::Checkbox("Bag 2", &Setting::Esp_Item_Bag2);
											ImGui::SetCursorPos({ 100.f,1125.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1125.0f });
											ImGui::ColorEdit4("Bag 2", (float*)&Esp_Item_Bag2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1125.0f });
											ImGui::SliderInt("###612", &Setting::Bag2, 8, 50);

											ImGui::SetCursorPos({ 60.f,1150.0f });
											ImGui::Checkbox("Bag 3", &Setting::Esp_Item_Bag3);
											ImGui::SetCursorPos({ 100.f,1150.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1150.0f });
											ImGui::ColorEdit4("Bag 3", (float*)&Esp_Item_Bag3_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1150.0f });
											ImGui::SliderInt("###61", &Setting::Bag3, 8, 50);

											ImGui::SetCursorPos({ 60.f,1175.0f });
											ImGui::Checkbox("Helmet 1", &Setting::Esp_Item_Helmet1);
											ImGui::SetCursorPos({ 100.f,1175.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1175.0f });
											ImGui::ColorEdit4("Helmet 1", (float*)&Esp_Item_Helmet1_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1175.0f });
											ImGui::SliderInt("###62", &Setting::Helmet1, 8, 50);

											ImGui::SetCursorPos({ 60.f,1200.0f });
											ImGui::Checkbox("Helmet 2", &Setting::Esp_Item_Helmet2);
											ImGui::SetCursorPos({ 100.f,1200.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1200.0f });
											ImGui::ColorEdit4("Helmet 2", (float*)&Esp_Item_Helmet2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1200.0f });
											ImGui::SliderInt("###63", &Setting::Helmet2, 8, 50);

											ImGui::SetCursorPos({ 60.f,1225.0f });
											ImGui::Checkbox("Helmet 3", &Setting::Esp_Item_Helmet3);
											ImGui::SetCursorPos({ 100.f,1225.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1225.0f });
											ImGui::ColorEdit4("Helmet 3", (float*)&Esp_Item_Helmet3_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1225.0f });
											ImGui::SliderInt("###64", &Setting::Helmet3, 8, 50);

											ImGui::SetCursorPos({ 60.f,1240.0f });
											ImGui::Text(" > Scope");

											ImGui::SetCursorPos({ 60.f,1265.0f });
											ImGui::Checkbox("RedDot", &Setting::Esp_Item_RedDot);
											ImGui::SetCursorPos({ 100.f,1265.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1265.0f });
											ImGui::ColorEdit4("RedDot", (float*)&RedDot, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1265.0f });
											ImGui::SliderInt("###RedDot", &Setting::RedDot, 8, 50);

											ImGui::SetCursorPos({ 60.f,1290.0f });
											ImGui::Checkbox("Holo", &Setting::Esp_Item_Holo);
											ImGui::SetCursorPos({ 100.f,1290.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1290.0f });
											ImGui::ColorEdit4("Holo", (float*)&Esp_Item_Holo_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1290.0f });
											ImGui::SliderInt("###73", &Setting::Holo, 8, 50);

											ImGui::SetCursorPos({ 60.f,1315.0f });
											ImGui::Checkbox("x2", &Setting::Esp_Item_x2);
											ImGui::SetCursorPos({ 100.f,1315.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1315.0f });
											ImGui::ColorEdit4("2X", (float*)&Esp_Item_x2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1315.0f });
											ImGui::SliderInt("###74", &Setting::x2, 8, 50);

											ImGui::SetCursorPos({ 60.f,1340.0f });
											ImGui::Checkbox("x3", &Setting::Esp_Item_x3);
											ImGui::SetCursorPos({ 100.f,1340.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1340.0f });
											ImGui::ColorEdit4("3X", (float*)&Esp_Item_x3_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1340.0f });
											ImGui::SliderInt("###75", &Setting::x3, 8, 50);

											ImGui::SetCursorPos({ 60.f,1365.0f });
											ImGui::Checkbox("x4", &Setting::Esp_Item_x4);
											ImGui::SetCursorPos({ 100.f,1365.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1365.0f });
											ImGui::ColorEdit4("4X", (float*)&Esp_Item_x4_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1365.0f });
											ImGui::SliderInt("###76", &Setting::x4, 8, 50);

											ImGui::SetCursorPos({ 60.f,1390.0f });
											ImGui::Checkbox("x6", &Setting::Esp_Item_x6);
											ImGui::SetCursorPos({ 100.f,1390.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1390.0f });
											ImGui::ColorEdit4("6X", (float*)&Esp_Item_x6_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1390.0f });
											ImGui::SliderInt("###77", &Setting::x6, 8, 50);

											ImGui::SetCursorPos({ 60.f,1415.0f });
											ImGui::Checkbox("x8", &Setting::Esp_Item_x8);
											ImGui::SetCursorPos({ 100.f,1415.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1415.0f });
											ImGui::ColorEdit4("8X", (float*)&Esp_Item_x8_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1415.0f });
											ImGui::SliderInt("###78", &Setting::x8, 8, 50);

											ImGui::SetCursorPos({ 60.f,1430.0f });
											ImGui::Text("> Other  Items");

											ImGui::SetCursorPos({ 60.f,1455.0f });
											ImGui::Checkbox("DP28", &Setting::Esp_Item_DP28);
											ImGui::SetCursorPos({ 100.f,1455.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1455.0f });
											ImGui::ColorEdit4("DP28", (float*)&Esp_Item_DP28_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1455.0f });
											ImGui::SliderInt("###17", &Setting::DP28, 8, 50);


											ImGui::SetCursorPos({ 60.f,1480.0f });
											ImGui::Checkbox("M249", &Setting::Esp_Item_M249);
											ImGui::SetCursorPos({ 100.f,1480.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1480.0f });
											ImGui::ColorEdit4("M249", (float*)&M249, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1480.0f });
											ImGui::SliderInt("###M249", &Setting::M249, 8, 50);

											ImGui::SetCursorPos({ 60.f,1505.0f });
											ImGui::Checkbox("CrossBow", &Setting::Esp_Item_CrossBow);
											ImGui::SetCursorPos({ 100.f,1505.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1505.0f });
											ImGui::ColorEdit4("CrossBow", (float*)&CrossBow, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1505.0f });
											ImGui::SliderInt("###CrossBow", &Setting::CrossBow, 8, 50);

											ImGui::SetCursorPos({ 60.f,1530.0f });
											ImGui::Checkbox("MG3", &Setting::Esp_Item_MG3);
											ImGui::SetCursorPos({ 100.f,1530.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1530.0f });
											ImGui::ColorEdit4("MG3", (float*)&mg3, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1530.0f });
											ImGui::SliderInt("###MG3", &Setting::MG3, 8, 50);


											ImGui::SetCursorPos({ 60.f,1545.0f });
											ImGui::Text("> Pistol Items");

											ImGui::SetCursorPos({ 60.f,1570.0f });
											ImGui::Checkbox("Flare Gun", &Setting::Esp_Item_FlareGun);
											ImGui::SetCursorPos({ 100.f,1570.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1570.0f });
											ImGui::ColorEdit4("Flare", (float*)&Flaregun, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1570.0f });
											ImGui::SliderInt("###21", &Setting::Flaregun, 8, 50);

											ImGui::SetCursorPos({ 60.f,1595.0f });
											ImGui::Checkbox("R1895", &Setting::Esp_Item_R1895);
											ImGui::SetCursorPos({ 100.f,1595.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1595.0f });
											ImGui::ColorEdit4("R1895", (float*)&R1895, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1595.0f });
											ImGui::SliderInt("###R1895", &Setting::R1895, 8, 50);

											ImGui::SetCursorPos({ 60.f,1620.0f });
											ImGui::Checkbox("Vz61", &Setting::Esp_Item_Vz61);
											ImGui::SetCursorPos({ 100.f,1620.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1620.0f });
											ImGui::ColorEdit4("Vz61", (float*)&Vz61, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1620.0f });
											ImGui::SliderInt("###Vz61", &Setting::Vz61, 8, 50);


											ImGui::SetCursorPos({ 60.f,1645.0f });
											ImGui::Checkbox("P92", &Setting::Esp_Item_P92);
											ImGui::SetCursorPos({ 100.f,1645.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1645.0f });
											ImGui::ColorEdit4("P92", (float*)&P92, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1645.0f });
											ImGui::SliderInt("###P92", &Setting::P92, 8, 50);

											ImGui::SetCursorPos({ 60.f,1670.0f });
											ImGui::Checkbox("P18C", &Setting::Esp_Item_P18C);
											ImGui::SetCursorPos({ 100.f,1670.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1670.0f });
											ImGui::ColorEdit4("P18C", (float*)&P18C, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1670.0f });
											ImGui::SliderInt("###P18C", &Setting::P18C, 8, 50);


											ImGui::SetCursorPos({ 60.f,1695.0f });
											ImGui::Checkbox("R45", &Setting::Esp_Item_R45);
											ImGui::SetCursorPos({ 100.f,1695.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1695.0f });
											ImGui::ColorEdit4("R45", (float*)&R45, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1695.0f });
											ImGui::SliderInt("###R45", &Setting::R45, 8, 50);


											ImGui::SetCursorPos({ 60.f,1720.0f });
											ImGui::Checkbox("P1911", &Setting::Esp_Item_P1911);
											ImGui::SetCursorPos({ 100.f,1720.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1720.0f });
											ImGui::ColorEdit4("P1911", (float*)&P1911, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1720.0f });
											ImGui::SliderInt("###P1911", &Setting::P1911, 8, 50);

											ImGui::SetCursorPos({ 60.f,1745.0f });
											ImGui::Checkbox("DesertEagle", &Setting::Esp_Item_DesertEagle);
											ImGui::SetCursorPos({ 100.f,1745.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1745.0f });
											ImGui::ColorEdit4("DesertEagle", (float*)&DesertEagle, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1745.0f });
											ImGui::SliderInt("###DesertEagle", &Setting::DesertEagle, 8, 50);

											ImGui::SetCursorPos({ 60.f,1760.0f });
											ImGui::Text("> Ammo Items");

											ImGui::SetCursorPos({ 60.f,1785.0f });
											ImGui::Checkbox("AWM immo", &Setting::Esp_Item_Awmimo);
											ImGui::SetCursorPos({ 100.f,1785.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1785.0f });
											ImGui::ColorEdit4("AWM immo", (float*)&AWMimmo, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1785.0f });
											ImGui::SliderInt("###72", &Setting::AWMimmo, 8, 50);

											ImGui::SetCursorPos({ 60.f,1810.0f });
											ImGui::Checkbox("Flare immo", &Setting::Esp_Item_Flare);
											ImGui::SetCursorPos({ 100.f,1810.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1810.0f });
											ImGui::ColorEdit4("Flare immo", (float*)&Flare, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1810.0f });
											ImGui::SliderInt("###Flare immo", &Setting::Flare, 8, 50);

											ImGui::SetCursorPos({ 60.f,1835.0f });
											ImGui::Checkbox("7.62mm", &Setting::Esp_Item_762mm);
											ImGui::SetCursorPos({ 100.f,1835.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1835.0f });
											ImGui::ColorEdit4("762mm", (float*)&Esp_Item_762mm_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1835.0f });
											ImGui::SliderInt("###68", &Setting::a762mm, 8, 50);

											ImGui::SetCursorPos({ 60.f,1860.0f });
											ImGui::Checkbox("556mm", &Setting::Esp_Item_556mm);
											ImGui::SetCursorPos({ 100.f,1860.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1860.0f });
											ImGui::ColorEdit4("556mm", (float*)&Esp_Item_556mm_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1860.0f });
											ImGui::SliderInt("###69", &Setting::a556mm, 8, 50);

											ImGui::SetCursorPos({ 60.f,1885.0f });
											ImGui::Checkbox("9mm", &Setting::Esp_Item_9mm);
											ImGui::SetCursorPos({ 100.f,1885.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1885.0f });
											ImGui::ColorEdit4("9mm", (float*)&Esp_Item_9mm_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1885.0f });
											ImGui::SliderInt("###70", &Setting::a9mm, 8, 50);

											ImGui::SetCursorPos({ 60.f,1910.0f });
											ImGui::Checkbox("45ACP", &Setting::Esp_Item_45ACP);
											ImGui::SetCursorPos({ 100.f,1910.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1910.0f });
											ImGui::ColorEdit4("45ACP", (float*)&Esp_Item_45ACP_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1910.0f });
											ImGui::SliderInt("###71", &Setting::a45ACP, 8, 50);

											ImGui::SetCursorPos({ 60.f,1935.0f });
											ImGui::Checkbox("12Guagemm", &Setting::Esp_Item_12Guagemm);
											ImGui::SetCursorPos({ 100.f,1935.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1935.0f });
											ImGui::ColorEdit4("12Guagemm", (float*)&a12Guagemm, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1935.0f });
											ImGui::SliderInt("###12Guagemm", &Setting::a12Guagemm, 8, 50);

											ImGui::SetCursorPos({ 60.f,1960.0f });
											ImGui::Checkbox("Boltmm", &Setting::Esp_Item_Boltmm);
											ImGui::SetCursorPos({ 100.f,1960.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,1960.0f });
											ImGui::ColorEdit4("Boltmm", (float*)&Boltmm, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,1960.0f });
											ImGui::SliderInt("###Boltmm", &Setting::Boltmm, 8, 50);

											ImGui::EndChild();
										}
										ImGui::EndTabItem();
									}
								}
								if (Setting::allitemss)
								{
									if (ImGui::BeginTabItem("> More Items")) {

										if (ImGui::BeginChild("###2", ImVec2(600, 290), false))
										{
											ImGuiStyle& style = ImGui::GetStyle();
											style.FramePadding = ImVec2(4, 2);
											ImGui::SetCursorPos({ 152.f,20.f });
											/*		 ImVec2(330, 330));*/
											ImGui::SetCursorPos({ 60.f,15.0f });
											ImGui::Text("> warning");

											ImGui::SetCursorPos({ 60.f,40.f });
											ImGui::Checkbox("Grenade warning", &Setting::grw);
											ImGui::SetCursorPos({ 100.f,40.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,65.f });
											ImGui::Checkbox("Molotow warning", &Setting::molow);
											ImGui::SetCursorPos({ 100.f,65.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,90.f });
											ImGui::Checkbox("Smoke warning", &Setting::Smok);
											ImGui::SetCursorPos({ 100.f,90.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,105.0f });
											ImGui::Text("> Items");

											ImGui::SetCursorPos({ 60.f,130.0f });
											ImGui::Checkbox("Loot-Box", &Setting::deadbox);
											ImGui::SetCursorPos({ 100.f,130.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,130.0f });
											ImGui::ColorEdit4("Dead-Box ", (float*)&deadbox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,130.0f });
											ImGui::SliderInt("###80", &Setting::deadbox1, 8, 50);

											ImGui::SetCursorPos({ 60.f,155.0f });
											ImGui::Checkbox("List-Box", &Setting::playerdeadbox);
											ImGui::SetCursorPos({ 100.f,155.0f });
											ImGui::Text("");
											
											ImGui::SetCursorPos({ 210.f,155.0f });
											ImGui::SliderInt("###84", &Setting::deadboxl, 8, 50);

											ImGui::SetCursorPos({ 60.f,180.0f });
											ImGui::Checkbox("AirDrop", &Setting::AirDrop);
											ImGui::SetCursorPos({ 100.f,180.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,180.0f });
											ImGui::ColorEdit4("AirDrop ", (float*)&Airdrop, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,180.0f });
											ImGui::SliderInt("###81", &Setting::Drop, 8, 50);

											ImGui::SetCursorPos({ 60.f,205.0f });
											ImGui::Checkbox("Gold", &Setting::GoldenTO);
											ImGui::SetCursorPos({ 100.f,205.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,205.0f });
											ImGui::ColorEdit4("Gold ", (float*)&Golden, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,205.0f });
											ImGui::SliderInt("###82", &Setting::Golden, 8, 50);

											ImGui::SetCursorPos({ 60.f,230.0f });
											ImGui::Checkbox("! RedZone Bomb", &Setting::Redzome);
											ImGui::SetCursorPos({ 100.f,230.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,230.0f });
											ImGui::ColorEdit4("Red Zone ", (float*)&AirAttack, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,230.0f });
											ImGui::SliderInt("###83", &Setting::AirAttack, 8, 50);


											ImGui::SetCursorPos({ 60.f,255.0f });
											ImGui::Checkbox("plan", &Setting::plan);
											ImGui::SetCursorPos({ 100.f,255.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,255.0f });
											ImGui::ColorEdit4("plan", (float*)&plancolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,255.0f });
											ImGui::SliderInt("###plan", &Setting::Drop, 8, 50);


											ImGui::SetCursorPos({ 60.f,270.0f });
											ImGui::Text(" > Vehicle ");

											ImGui::SetCursorPos({ 60.f,295.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,295.0f });
											ImGui::ColorEdit4("Health", (float*)&vehicle, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,295.0f });

											ImGui::SliderInt("vehicle size", &Setting::vehisize, 0, 25);
											ImGui::SetCursorPos({ 60.f,320.0f });
											ImGui::Checkbox("Vehicle Health Bar", &Setting::hp);
											ImGui::SetCursorPos({ 100.f,320.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,345.0f });
											ImGui::Checkbox("oil", &Setting::feul);
											ImGui::SetCursorPos({ 100.f,345.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,370.0f });
											ImGui::Checkbox("GasCan", &Setting::Esp_Item_GasCan);
											ImGui::SetCursorPos({ 100.f,370.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,370.0f });
											ImGui::ColorEdit4("GasCan", (float*)&GasCan, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,370.0f });
											ImGui::SliderInt("###GasCan", &Setting::GasCan, 8, 50);



											ImGui::EndChild();
										}
										ImGui::EndTabItem();
									}
								}
								if (Setting::healthitem)
								{
									if (ImGui::BeginTabItem("> Useble Items"))
									{
										if (ImGui::BeginChild("###heal", ImVec2(600, 290), false))
										{
											ImGuiStyle& style = ImGui::GetStyle();
											style.FramePadding = ImVec2(4, 2);
											ImGui::SetCursorPos({ 152.f,20.f });
											/*		 ImVec2(330, 330));*/
											ImGui::SetCursorPos({ 60.f,20.0f });
											ImGui::Text(" > Health Items");

											ImGui::SetCursorPos({ 60.f,50.0f });
											ImGui::Checkbox("Med Kit", &Setting::Esp_Item_MedKit);
											ImGui::SetCursorPos({ 100.f,50.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,50.0f });
											ImGui::ColorEdit4("Med Kit", (float*)&Esp_Item_MedKit_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,50.0f });
											ImGui::SliderInt("###54", &Setting::MedKit, 8, 50);

											ImGui::SetCursorPos({ 60.f,80.0f });
											ImGui::Checkbox("First Aid Kit", &Setting::Esp_Item_FirstAidKit);
											ImGui::SetCursorPos({ 100.f,80.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,80.0f });
											ImGui::ColorEdit4("First Aid Kit", (float*)&Esp_Item_FirstAidKit_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,80.0f });
											ImGui::SliderInt("###55", &Setting::FirstAidKit, 8, 50);

											ImGui::SetCursorPos({ 60.f,110.0f });
											ImGui::Checkbox("Painkiller", &Setting::Esp_Item_Painkiller);
											ImGui::SetCursorPos({ 100.f,110.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,110.0f });
											ImGui::ColorEdit4("Painkiller", (float*)&Esp_Item_Painkiller_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,110.0f });
											ImGui::SliderInt("###56", &Setting::Painkiller, 8, 50);

											ImGui::SetCursorPos({ 60.f,140.0f });
											ImGui::Checkbox("Energy Drink", &Setting::Esp_Item_EnergyDrink);
											ImGui::SetCursorPos({ 100.f,140.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,140.0f });
											ImGui::ColorEdit4("Energy Drink", (float*)&Esp_Item_EnergyDrink_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,140.0f });
											ImGui::SliderInt("###57", &Setting::EnergyDrink, 8, 50);

											ImGui::SetCursorPos({ 60.f,170.0f });
											ImGui::Checkbox("Adrenaline", &Setting::Esp_Item_AdrenalineSyringe);
											ImGui::SetCursorPos({ 100.f,170.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,170.0f });
											ImGui::ColorEdit4("Adrenaline Syringe", (float*)&Esp_Item_AdrenalineSyringe_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,170.0f });
											ImGui::SliderInt("###58", &Setting::AdrenalineSyringe, 8, 50);


											ImGui::SetCursorPos({ 60.f,200.0F });
											ImGui::Text("> Granades");


											ImGui::SetCursorPos({ 60.f,230.0f });
											ImGui::Checkbox("Frag", &Setting::Esp_Item_Frag);
											ImGui::SetCursorPos({ 100.f,230.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,230.0f });
											ImGui::ColorEdit4("Frag", (float*)&Esp_Item_Frag_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,230.0f });
											ImGui::SliderInt("###51", &Setting::frag, 8, 50);


											ImGui::SetCursorPos({ 60.f,260.0f });
											ImGui::Checkbox("Smoke", &Setting::Esp_Item_Smoke);
											ImGui::SetCursorPos({ 100.f,260.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,260.0f });
											ImGui::ColorEdit4("Smoke", (float*)&Esp_Item_Smoke_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,260.0f });
											ImGui::SliderInt("###52", &Setting::Smoke, 8, 50);


											ImGui::SetCursorPos({ 60.f,290.0f });
											ImGui::Checkbox("Molotof", &Setting::Esp_Item_Molotof);
											ImGui::SetCursorPos({ 100.f,290.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 560.f,290.0f });
											ImGui::ColorEdit4("Molotof", (float*)&Esp_Item_Molotof_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
											ImGui::SetCursorPos({ 210.f,290.0f });
											ImGui::SliderInt("###53", &Setting::Molotof, 8, 50);



											ImGui::EndChild();
										}
										ImGui::EndTabItem();
									}
								}
								if (Setting::ItemsImage)
								{
									if (ImGui::BeginTabItem(">Items Image"))
									{
										if (ImGui::BeginChild("###Image", ImVec2(600, 290), false))
										{
											ImGuiStyle& style = ImGui::GetStyle();
											style.FramePadding = ImVec2(4, 2);
											ImGui::SetCursorPos({ 152.f,20.f });
											/*	 ImVec2(330, 330));*/
											ImGui::SetCursorPos({ 60.f,13.0f });

											ImGui::Text(" > Items Image ");

											ImGui::SetCursorPos({ 60.f,40.f });
											ImGui::Checkbox("Grenade warning", &Setting::grwm);
											ImGui::SetCursorPos({ 100.f,40.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,60.f });
											ImGui::Checkbox("Molotow warning", &Setting::molowm);
											ImGui::SetCursorPos({ 100.f,60.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,80.f });
											ImGui::Checkbox("Smoke warning", &Setting::Smokm);
											ImGui::SetCursorPos({ 100.f,80.f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,100.0f });
											ImGui::Checkbox("M416", &Setting::Esp_Item_M416m);
											ImGui::SetCursorPos({ 100.f,100.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,120.0f });
											ImGui::Checkbox("AKM", &Setting::Esp_Item_AKMm);
											ImGui::SetCursorPos({ 100.f,120.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,140.0f });
											ImGui::Checkbox("SCAR-L", &Setting::Esp_Item_SCARLm);
											ImGui::SetCursorPos({ 100.f,140.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,160.0f });
											ImGui::Checkbox("M762", &Setting::Esp_Item_M762m);
											ImGui::SetCursorPos({ 100.f,160.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,180.0f });
											ImGui::Checkbox("DP28", &Setting::Esp_Item_DP28m);
											ImGui::SetCursorPos({ 100.f,180.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,200.0f });
											ImGui::Checkbox("AWM", &Setting::Esp_Item_Awmm);
											ImGui::SetCursorPos({ 100.f,200.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,220.f });
											ImGui::Checkbox("M24", &Setting::Esp_Item_M24m);
											ImGui::SetCursorPos({ 100.f,220.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,240.f });
											ImGui::Checkbox("KAR98", &Setting::Esp_Item_Kar98km);
											ImGui::SetCursorPos({ 100.f,240.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,260.f });
											ImGui::Checkbox("Flare Gun", &Setting::Esp_Item_FlareGunm);
											ImGui::SetCursorPos({ 100.f,260.f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,280.f });
											ImGui::Checkbox("Loot-Box", &Setting::deadboxm);
											ImGui::SetCursorPos({ 100.f,280.f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,300.0f });
											ImGui::Checkbox("Armor 3", &Setting::Esp_Item_Armor3m);
											ImGui::SetCursorPos({ 100.f,300.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,320.0f });
											ImGui::Checkbox("Bag 3", &Setting::Esp_Item_Bag3m);
											ImGui::SetCursorPos({ 100.f,320.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,340.0f });
											ImGui::Checkbox("Helmet 3", &Setting::Esp_Item_Helmet3m);
											ImGui::SetCursorPos({ 100.f,340.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,360.0f });
											ImGui::Checkbox("AirDrop", &Setting::AirDropm);
											ImGui::SetCursorPos({ 100.f,360.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,380.0f });
											ImGui::Checkbox("Golden", &Setting::GoldenTOm);
											ImGui::SetCursorPos({ 100.f,380.0f });
											ImGui::Text("");
											///////

											ImGui::SetCursorPos({ 60.f,400.0f });
											ImGui::Checkbox("Helmet 1", &Setting::Esp_Item_Helmet1m);
											ImGui::SetCursorPos({ 100.f,400.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,420.0f });
											ImGui::Checkbox("Helmet 2", &Setting::Esp_Item_Helmet2m);
											ImGui::SetCursorPos({ 100.f,420.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,440.0f });
											ImGui::Checkbox("Bag 1", &Setting::Esp_Item_Bag1m);
											ImGui::SetCursorPos({ 100.f,440.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,460.0f });
											ImGui::Checkbox("Bag 2", &Setting::Esp_Item_Bag2m);
											ImGui::SetCursorPos({ 100.f,460.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,480.0f });
											ImGui::Checkbox("Armor 1", &Setting::Esp_Item_Armor1m);
											ImGui::SetCursorPos({ 100.f,480.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,500.0f });
											ImGui::Checkbox("Armor 2", &Setting::Esp_Item_Armor2m);
											ImGui::SetCursorPos({ 100.f,500.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,520.0f });
											ImGui::Checkbox("G36C", &Setting::Esp_Item_G36Cm);
											ImGui::SetCursorPos({ 100.f,520.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,540.0f });
											ImGui::Checkbox("QBZ", &Setting::Esp_Item_QBZm);
											ImGui::SetCursorPos({ 100.f,540.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,560.0f });
											ImGui::Checkbox("QBU", &Setting::Esp_Item_QBUm);
											ImGui::SetCursorPos({ 100.f,560.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,580.0f });
											ImGui::Checkbox("SLR", &Setting::Esp_Item_SLRm);
											ImGui::SetCursorPos({ 100.f,580.0f });
											ImGui::Text("");



											ImGui::SetCursorPos({ 60.f,600.0f });
											ImGui::Checkbox("Mini14", &Setting::Esp_Item_Mini14m);
											ImGui::SetCursorPos({ 100.f,600.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,620.0f });
											ImGui::Checkbox("PP19", &Setting::Esp_Item_PP19m);
											ImGui::SetCursorPos({ 100.f,620.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,640.0f });
											ImGui::Checkbox("Tommy Gun", &Setting::Esp_Item_TommyGunm);
											ImGui::SetCursorPos({ 100.f,640.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,660.0f });
											ImGui::Checkbox("MP5K", &Setting::Esp_Item_MP5Km);
											ImGui::SetCursorPos({ 100.f,660.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,680.0f });
											ImGui::Checkbox("UMP9", &Setting::Esp_Item_UMP9m);
											ImGui::SetCursorPos({ 100.f,680.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,700.0f });
											ImGui::Checkbox("Vector", &Setting::Esp_Item_Vectorm);
											ImGui::SetCursorPos({ 100.f,700.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,720.0f });
											ImGui::Checkbox("Uzi", &Setting::Esp_Item_Uzim);
											ImGui::SetCursorPos({ 100.f,720.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,740.0f });
											ImGui::Checkbox("7.62mm", &Setting::Esp_Item_762mmm);
											ImGui::SetCursorPos({ 100.f,740.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,760.0f });
											ImGui::Checkbox("556mm", &Setting::Esp_Item_556mmm);
											ImGui::SetCursorPos({ 100.f,760.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,780.0f });
											ImGui::Checkbox("9mm", &Setting::Esp_Item_9mmm);
											ImGui::SetCursorPos({ 100.f,780.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,800.0f });
											ImGui::Checkbox("45ACP", &Setting::Esp_Item_45ACPm);
											ImGui::SetCursorPos({ 100.f,800.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,820.0f });
											ImGui::Checkbox("Mk47-Mutant", &Setting::Esp_Item_Mk47Mutantm);
											ImGui::SetCursorPos({ 100.f,820.0f });
											ImGui::Text("");
											/////////
											ImGui::SetCursorPos({ 60.f,840.0f });
											ImGui::Checkbox("Med Kit", &Setting::Esp_Item_MedKitm);
											ImGui::SetCursorPos({ 100.f,840.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,860.0f });
											ImGui::Checkbox("First Aid Kit", &Setting::Esp_Item_FirstAidKitm);
											ImGui::SetCursorPos({ 100.f,860.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,880.0f });
											ImGui::Checkbox("Painkiller", &Setting::Esp_Item_Painkillerm);
											ImGui::SetCursorPos({ 100.f,880.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,900.0f });
											ImGui::Checkbox("Energy Drink", &Setting::Esp_Item_EnergyDrinkm);
											ImGui::SetCursorPos({ 100.f,900.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,920.0f });
											ImGui::Checkbox("Adrenaline Syringe", &Setting::Esp_Item_AdrenalineSyringem);
											ImGui::SetCursorPos({ 100.f,920.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,940.0f });
											ImGui::Checkbox("Frag", &Setting::Esp_Item_Molotofm);
											ImGui::SetCursorPos({ 100.f,940.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,960.0f });
											ImGui::Checkbox("Smoke", &Setting::Esp_Item_Smokem);
											ImGui::SetCursorPos({ 100.f,960.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,980.0f });
											ImGui::Checkbox("Molotof", &Setting::Esp_Item_Molotofmm);
											ImGui::SetCursorPos({ 100.f,980.0f });
											ImGui::Text("");


											ImGui::SetCursorPos({ 60.f,1000.0f });
											ImGui::Checkbox("x2", &Setting::Esp_Item_x2m);
											ImGui::SetCursorPos({ 100.f,1000.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,1020.0f });
											ImGui::Checkbox("x3", &Setting::Esp_Item_x3m);
											ImGui::SetCursorPos({ 100.f,1020.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,1040.0f });
											ImGui::Checkbox("x4", &Setting::Esp_Item_x4m);
											ImGui::SetCursorPos({ 100.f,1040.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,1060.0f });
											ImGui::Checkbox("x6", &Setting::Esp_Item_x6m);
											ImGui::SetCursorPos({ 100.f,1060.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,1080.0f });
											ImGui::Checkbox("x8", &Setting::Esp_Item_x8m);
											ImGui::SetCursorPos({ 100.f,1080.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,1100.0f });
											ImGui::Checkbox("Holo", &Setting::Esp_Item_Holom);
											ImGui::SetCursorPos({ 100.f,1100.0f });
											ImGui::Text("");

											ImGui::SetCursorPos({ 60.f,1120.0f });
											ImGui::Checkbox("Vehicle", &Setting::Vehiclem);
											ImGui::SetCursorPos({ 100.f,1120.0f });
											ImGui::Text("");
											ImGui::EndChild();
										}
										ImGui::EndTabItem();
									}
								}
							}
							if (Settings::Tab == 3)
							{
								ImGui::SetCursorPos({ 55.f,125.0f });
								ImGui::Text(" Aimbot And : Bullet Track ");

								if (ImGui::BeginTabItem(" > Very Safe "))
								{
									if (ImGui::BeginChild("###aimbot", ImVec2(600, 290), false))
									{
										ImGui::SetCursorPos({ 260.f,5.f });
										/*	 ImVec2(220, 220));*/
										const char* Emu[] = { "Head", "Neck", "Body", "Foot" };

										const char* combo_label = Emu[Setting::curraim];

										const char* enginetype[] = { "Mouse Event" };

										const char* enginelabel = enginetype[Setting::engine];



										ImGui::SetCursorPos({ 100.f,15.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,15.0f });
										ImGui::Checkbox("Tracking Bullet", &Setting::MagicBullet);

										


										ImGui::SetCursorPos({ 100.f,70.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,70.0f });
										ImGui::Checkbox("Skip Knocked", &Setting::knocked);

										ImGui::SetCursorPos({ 100.f,95.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,95.0f });
										ImGui::Checkbox(" Skip Bots", &Setting::SkipBots);

										ImGui::SetCursorPos({ 100.f,120.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,120.0f });
										ImGui::Checkbox("Anti HeadShot", &Setting::zeroheadshot);

										ImGui::SetCursorPos({ 100.f,145.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,145.0f });
										ImGui::Checkbox("AimbotPosition", &Setting::aimbotposition);
										ImGui::SetCursorPos({ 560.f,145.0f });
										ImGui::ColorEdit4("##AimbotPosition", (float*)&DX11::ImGui_DX11::Color::Green, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

										ImGui::SetCursorPos({ 100.f,170.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,170.0f });
										ImGui::Checkbox(" MAgic line", &Setting::MAgicline);
										ImGui::SetCursorPos({ 560.f,170.0f });
										ImGui::ColorEdit4(" Magicline", (float*)magicline, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

										ImGui::SetCursorPos({ 100.f,195.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,195.0f });
										ImGui::Checkbox(" Anti Stream", &Setting::antiscreen);
										if (Setting::antiscreen)
										{
											SetWindowDisplayAffinity(DX11Window::hWindow, WDA_EXCLUDEFROMCAPTURE);
										}
										else
										{
											SetWindowDisplayAffinity(DX11Window::hWindow, WDA_NONE);
										}

										ImGui::SetCursorPos({ 70.0f,220.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,220.0f });
										ImGui::Checkbox("AimbotFOV", &Setting::fovcircle);



										ImGui::SetCursorPos({ 560.f,220.0f });
										ImGui::ColorEdit4(" fovcolor", (float*)&fovcirclecolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										ImGui::SetCursorPos({ 210.f,220.0f });
										ImGui::SliderFloat("fovFOVsize", &Setting::fovcircleredus, 50.0f, 350.0f);
										ImGui::SetCursorPosX(60.0f);
										ImGui::Checkbox(" IPadView", &Setting::IpadVeiw);
										if (Setting::IpadVeiw)
										{
											ImGui::SetCursorPos({ 170.f,248.0f });
											if (ImGui::TreeNodeEx("iPad View"))
											{
												ImGui::Indent();
												ImGui::SetCursorPos({ 210.f,260.0f });
												ImGui::SliderInt("####iPad View", &Setting::ipadview, 200.0f, 380.0f);


												ImGui::Unindent();
												ImGui::TreePop();
											}
										}



										ImGui::SetCursorPos({ 40.0f,295.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 250.0f,295.0f });
										ImGui::SetNextItemWidth(180.0f);
										if (ImGui::BeginCombo(" AimcPositon", combo_label, ImGuiComboFlags_HeightSmall))
										{
											for (int n = 0; n < IM_ARRAYSIZE(Emu); n++)
											{
												const bool is_selected = (Setting::curraim == n);
												if (ImGui::Selectable(Emu[n], is_selected))
													Setting::curraim = n;
												if (is_selected)
													ImGui::SetItemDefaultFocus();
											}


											ImGui::EndCombo();
										}

										ImGui::SetCursorPos({ 40.0f,320.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 250.0f,320.0f });
										ImGui::SetNextItemWidth(180.0f);
										if (ImGui::BeginCombo(" AimcEngine", enginelabel, ImGuiComboFlags_HeightSmall))
										{
											for (int n = 0; n < IM_ARRAYSIZE(enginetype); n++)
											{
												const bool is_selectedd = (item_current_Aim == n);
												if (ImGui::Selectable(enginetype[n], is_selectedd))
													Setting::engine = n;
												if (is_selectedd)
													ImGui::SetItemDefaultFocus();
											}

											ImGui::EndCombo();
										}



										ImGui::SetCursorPos({ 40.0f,370.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 250.f,370.0f });
										ImGui::SetNextItemWidth(200.0f);
										ImGui::Hotkey("##MagicBulletKey ", &Setting::MagicBulletKey, ImVec2(180.0f, 24));

										ImGui::SetCursorPos({ 40.0f,395.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 250.f,395.0f });
										ImGui::SetNextItemWidth(180.0f);
										ImGui::Hotkey("###Enable ", &Setting::EnableKey, ImVec2(180.0f, 24));



										ImGui::SetCursorPos({ 40.0f,420.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 250.f,420.0f });
										ImGui::SetNextItemWidth(180.0f);
										ImGui::Hotkey("##PositionKey ", &Setting::PositionKey, ImVec2(180.0f, 24));


										ImGui::EndChild();
									}

									ImGui::EndTabItem();
								}

								if (Setting::engine == 1)
								{
									if (ImGui::BeginTabItem(" > Silent Aimbot"))
									{
										if (ImGui::BeginChild("###magic", ImVec2(600, 290), false))
										{
											ImGui::SetCursorPos({ 152.f,20.f });
											/*	 ImVec2(330, 330));*/
											ImGui::SetCursorPos({ 100.f,50.0f });
											ImGui::Text("");
											ImGui::SetCursorPos({ 60.f,50.0f });
											ImGui::Checkbox("Aimbotline", &Setting::MAgicline);
											ImGui::SetCursorPos({ 560.f,50.0f });
											ImGui::ColorEdit4(" Magicline", (float*)magicline, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

											ImGui::EndChild();
										}
										ImGui::EndTabItem();
									}

								}

							}
							if (Settings::Tab == 4)
							{
								//ImGui::SetCursorPos(ImVec2(10, 10));
								ImGui::BeginChild("##2", ImVec2(547, 290), true, 0);
								{

									ImGui::SetCursorPos(ImVec2(5, 5));
									ImGui::BeginChild("###1", ImVec2(230, 280), true, 0);
									{
										ImGui::SetCursorPos({ 50.f,5.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,5.0f });
										ImGui::Checkbox("Aimbot", &Setting::Aimbot);

										ImGui::SetCursorPos({ 10.f,25.0f });
										ImGui::Checkbox("Instant Hit", &Setting::instanthit);
										ImGui::SetCursorPos({ 50.f,25.0f });
										ImGui::Text("");


										ImGui::SetCursorPos({ 50.f,45.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,45.0f });
										ImGui::Checkbox("No recoil", &Setting::recoil);

										ImGui::SetCursorPos({ 50.f,65.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,65.0f });
										ImGui::Checkbox("X Effect", &Setting::MagicX);

										ImGui::SetCursorPos({ 50.f,85.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,85.0f });
										ImGui::Checkbox("Force TPP", &Setting::ForceTPP);

										ImGui::SetCursorPos({ 50.f,105.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,105.0f });
										ImGui::Checkbox("Quick Loot", &Setting::quickloot);

										ImGui::SetCursorPos({ 50.f,125.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,125.0f });
										ImGui::Checkbox("No Spread", &Setting::nospread);

										ImGui::SetCursorPos({ 50.f,145.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,145.0f });
										ImGui::Checkbox("Fast Switch", &Setting::FastSwitch);

										ImGui::SetCursorPos({ 10.f,165.0f });
										ImGui::Checkbox("Fast car", &Setting::speedcar);
										ImGui::SetCursorPos({ 50.f,165.0f });
										ImGui::Text("");

										ImGui::SetCursorPos({ 50.f,185.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,185.0f });
										ImGui::Checkbox("Rapid Fire", &Setting::rapidfire);

										ImGui::SetCursorPos({ 50.f,205.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,205.0f });
										ImGui::Checkbox("fast Run", &Setting::fastrun);

										ImGui::SetCursorPos({ 50.f,225.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,225.0f });
										ImGui::Checkbox("Camera Catch", &Setting::CameraCatch);

										ImGui::SetCursorPos({ 50.f,245.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,245.0f });
										ImGui::Checkbox(" GodView", &Setting::GodView);

										ImGui::SetCursorPos({ 50.f,265.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,265.0f });
										ImGui::Checkbox(" PowerMagic Denger", &Setting::PowerMagic);

										ImGui::SetCursorPos({ 50.f,285.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,285.0f });
										ImGui::Checkbox("Fast Parachute", &Setting::FastParachute);

										ImGui::SetCursorPos({ 50.f,305.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,305.0f });
										ImGui::Checkbox("RAVEN X SUIT Set", &Setting::RAVENXSUITSet);

										ImGui::SetCursorPos({ 50.f,325.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,325.0f });
										ImGui::Checkbox("Pharo X SUIT Set", &Setting::PharoSUITSet);

										ImGui::SetCursorPos({ 50.f,345.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 10.f,345.0f });
										ImGui::Checkbox("M416 JOKER", &Setting::M416Joker);



									}
									ImGui::EndChild();

									ImGui::SetCursorPos(ImVec2(238, 5));
									ImGui::BeginChild("###2", ImVec2(375, 355), true, 0);
									{

										if (Setting::modskin)
										{
											if (ImGui::TreeNodeEx("mod skin"))
											{
												ImGui::SetCursorPos({ 100.f,5.0f });
												ImGui::Text("");
												ImGui::SetCursorPos({ 60.f,5.0f });
												ImGui::Checkbox("RAVEN X SUIT Set", &Setting::RAVENXSUITSet);

												ImGui::SetCursorPos({ 100.f,25.0f });
												ImGui::Text("");
												ImGui::SetCursorPos({ 60.f,25.0f });
												ImGui::Checkbox("Pharo X SUIT Set", &Setting::PharoSUITSet);
												ImGui::SetCursorPos({ 100.f,65.0f });
												ImGui::Text("");
												ImGui::SetCursorPos({ 60.f,65.0f });
												ImGui::Checkbox("M416 Glacier", &Setting::M416Glacier);

												ImGui::SetCursorPos({ 100.f,45.0f });
												ImGui::Text("");
												ImGui::SetCursorPos({ 60.f,45.0f });
												ImGui::Checkbox("M416 JOKER", &Setting::M416Joker);
											}
										}

										if (Setting::fastrun)
										{
											if (ImGui::TreeNodeEx("Fast run"))
											{
												ImGui::Indent();

												ImGui::SliderInt("####2", &Setting::fastrv, 1.0f, 8.0f);
												ImGui::Text("");
												ImGui::SameLine();
												ImGui::Hotkey("##fastrunKey", &Setting::fastrunkey, ImVec2(180.0f, 24));
												ImGui::Unindent();
												ImGui::TreePop();
											}
										}
										if (Setting::Aimbot)
										{
											if (ImGui::TreeNodeEx("Aimbot"))
											{

												ImGui::Indent();
												ImGui::SliderFloat("##AimbotSpeede", &Setting::Aimspeed, 1.0f, 15.0f);
												ImGui::Text("");
												ImGui::SameLine();
												ImGui::Hotkey("##Aimbot1Key ", &Setting::AimbotKey, ImVec2(180.0f, 24));
												ImGui::Unindent();
												ImGui::TreePop();
											}
										}

										if (Setting::FastParachute)
										{
											if (ImGui::TreeNodeEx("Fast Parachute"))
											{
												ImGui::Indent();

												ImGui::Text("");
												ImGui::SameLine();
												ImGui::Hotkey("##FastParachutekey ", &Setting::FastParachutekey, ImVec2(180.0f, 24));


												ImGui::Unindent();
												ImGui::TreePop();
											}
										}

										if (Setting::instanthit)
										{
											if (ImGui::TreeNodeEx("Instant hit"))
											{
												ImGui::Indent();

												ImGui::SliderInt("####5", &Setting::instantv, 1.0f, 1000000.0f);


												ImGui::Unindent();
												ImGui::TreePop();
											}
										}
									}
									ImGui::EndChild();

								}
								ImGui::EndChild();
							}
							if (Settings::Tab == 5)
							{
								ImGui::SetCursorPos({ 55.f,125.0f });
								ImGui::Text(" Setings: ");
								if (ImGui::BeginTabItem(" > Setings "))
								{
									if (ImGui::BeginChild("###setting", ImVec2(600, 290), false))
									{
										ImGui::SetCursorPos({ 375.f,20.f });
										/*	 ImVec2(220, 220));*/
										ImGui::SetCursorPos({ 100.f,20.0f });
										ImGui::Text(" ");
										ImGui::SetCursorPos({ 60.f,20.0f });
										ImGui::Checkbox("fightmode", &Setting::fightmode);
										ImGui::SetCursorPos({ 180.f,20.0f });
										ImGui::SetNextItemWidth(180.0f);
										ImGui::Hotkey("###Enablef ", &Setting::EnableKeyf, ImVec2(180.0f, 24));

										ImGui::SetCursorPos({ 100.f,50.f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,50.f });
										if (ImGui::Checkbox("Style No 1 :-", &Setting::style1))
										{

											if (Setting::style1)
											{
												Setting::style2 = false;
												Setting::style3 = false;

											}
											else {
												Setting::style2 = true;
												Setting::style3 = true;
											}


										}

										ImGui::SetCursorPos({ 100.f,80.f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,80.f });
										if (ImGui::Checkbox("Style No 2 :-", &Setting::style2))
										{
											if (Setting::style2)
											{
												Setting::style1 = false;
												Setting::style3 = false;

											}
											else
											{
												Setting::style1 = true;
											}
										}

										ImGui::SetCursorPos({ 100.f,110.f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,110.f });
										if (ImGui::Checkbox("Style No 3 :-", &Setting::style3))
										{


											if (Setting::style3)
											{
												Setting::style1 = false;
												Setting::style2 = false;

											}
											else
											{
												Setting::style1 = true;
											}
										}
										ImGui::SetCursorPos({ 100.f,80.f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 480.f,80.f });
										ImGui::Checkbox("Items Image :-", &Setting::ItemsImage);

										ImGui::SetCursorPos({ 100.f,110.f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 480.f,110.f });
										ImGui::Checkbox("IText border  ", &Setting::borderlo);



										//

										/*ImGui::SetCursorPos({ 140.f,330.f });
										ImGui::Hotkey("test ", &Setting::keyyy, ImVec2(150, 25));*/

										ImGui::EndChild();
									}

									ImGui::EndTabItem();
								}
								if (ImGui::BeginTabItem(" > Overlay "))
								{
									if (ImGui::BeginChild("###Overlay", ImVec2(640, 360), false))
									{
										//	ImGui::SetCursorPos({ 60.f,30.0f });													
										//	ImGui::Text("Overlay Transparency");
										//	ImGui::SetCursorPos({ 210.f,30.f });
										//	ImGui::SliderFloat("Transsp",&overlaycolor, 0.0, 255.0);
										////	ImGui::ColorEdit4("Transparency", (float*)&DX11::alpha, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
										//
										ImGui::SetCursorPos({ 100.f,60.0f });
										ImGui::Text("");
										ImGui::SetCursorPos({ 60.f,60.0f });
										ImGui::Checkbox("WaterMark", &watermark);

										ImGui::EndChild();
									}
									ImGui::EndTabItem();
								}
							}
						}
						ImGui::EndTabBar();
					}
					ImGui::End();
				}
			}

		}

		if (Setting::ShowMenu2)
		{
			DrawMenu2();
		}


//join @vipsourcecode for more free sources

		if (login)
		{
			if (unload)
			{
				ImGuiIO& Io = ImGui::GetIO();

				//ImGui::SetNextWindowSize(ImVec2(400.0f, 115.0f));
				ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.5f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
				ImGui::SetNextWindowSize(ImVec2(260.0f, 80.0f));
				if (ImGui::Begin("Unload hack", 0, Flags2))
				{
					imguipp::CenterText("Are you sure ?", 0, 0);
					if (ImGui::Button("OK", { 122.f,21.f }))
					{
						exit(0);
					}
					ImGui::SameLine();
					if (ImGui::Button("Cancel", { 122.f,21.f }))
					{
						unload = false;
					}

					ImGui::End();
				}
			}

			time_t t; // t passed as argument in function time()
			struct tm* tt; // decalring variable for localtime()
			time(&t); //passing argument to time()
			tt = localtime(&t);
			//cout << "Current Day, Date and Time is = " << asctime(tt);
			tim = asctime(tt);




			ViewMatrix = Utility::ReadMemoryEx<D3DMATRIX>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::ViewMatrixBase) + 0x20) + 0x200);
			currIndex = Memory::AimFindBestTarget();
			for (AActor& AActor : Data::AActorList)
			{
				if (!Algorithm::WorldToScreenPlayer(AActor.Position, Screen, &Distance, ViewMatrix)) continue;
				if (Distance < 350)
				{
					temp = AActor.Name.c_str();// +"   " + to_string(Distance) + "M ";
					teamids = AActor.TeamId;
					col = ImColor(teamids, teamids, teamids, 255);
					// linescolors = { teamids  ,  teamids , teamids ,1.0f };
					switch (teamids)
					{

					case 1:
						linescolors = { 1.000f, 0.033f, 0.129f, 1.000f };
						break;
					case 2:
						linescolors = { 1.000f, 1.000f, 0.000f, 1.000f };
						break;
					case 3:
						linescolors = { 0.866f, 0.128f, 0.081f, 1.000f };
						break;
					case 4:
						linescolors = { 0.844f, 0.066f, 1.000f, 1.000f };
						break;
					case 5:
						linescolors = { 0.737f, 1.000f, 0.000f, 1.000f };
						break;
					case 6:
						linescolors = { 0.000f, 1.000f, 0.964f, 1.000f };
						break;
					case 7:
						linescolors = { 0.610f, 0.190f, 1.000f, 1.000f };
						break;
					case 8:
						linescolors = { 1.000f, 0.100f, 0.401f, 1.000f };
						break;
					case 9:
						linescolors = { 0.610f, 0.190f, 1.000f, 1.000f };
						break;
					case  10:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
						break;
					case 11:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
						break;
					case 12:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
						break;
					case 13:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
						break;
					case 14:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
						break;
					case 15:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };
						break;
					case 16:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };
						break;
					case 17:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };
						break;
					case 18:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };
						break;
					case 19:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
						break;
					case  20:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };
						break;
					case 21:
						linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
						break;
					case 22:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 23:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 24:
						linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
						break;
					case 25:
						linescolors = { 0.053f, 0.355f, 1.000f, 1.000f };
						break;
					case 26:
						linescolors = { 1.000f, 0.70f, 0.000f, 1.000f };
						break;
					case 27:
						linescolors = { 1.000f, 1.000f, 0.000f, 1.000f };
						break;
					case 28:
						linescolors = { 0.866f, 0.128f, 0.081f, 1.000f };
						break;
					case 29:
						linescolors = { 0.844f, 0.066f, 1.000f, 1.000f };
						break;
					case 30:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
						break;
					case 31:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
						break;
					case 32:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
						break;
					case 33:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
						break;
					case 34:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
						break;
					case 35:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };
						break;
					case 36:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };
						break;
					case 37:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };
						break;
					case 38:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };
						break;
					case 39:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
						break;
					case  40:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };
						break;
					case 41:
						linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
						break;
					case 42:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 43:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 44:
						linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
						break;
					case 45:
						linescolors = { 0.053f, 0.355f, 1.000f, 1.000f };
						break;
					case 46:
						linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
						break;
					case 47:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 48:
						linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
						break;
					case 49:
						linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
						break;
					case 50:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
						break;
					case 51:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
						break;
					case 52:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
						break;
					case 53:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
						break;
					case 54:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
						break;
					case 55:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

						break;
					case 56:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

						break;
					case 57:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

						break;
					case 58:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

						break;
					case 59:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
						break;
					case  60:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

						break;
					case 61:
						linescolors = { 0.399f, 0.720f, 0.122f, 1.000f };

						break;
					case 62:
						linescolors = { 1.000f, 0.960f, 0.560f, 1.000f };

						break;
					case 63:
						linescolors = { 0.874f, 0.301f, 0.068f, 1.000f };

						break;
					case 64:
						linescolors = { 0.110f, 0.845f, 0.174f, 1.000f };

						break;
					case 65:
						linescolors = { 0.802f, 0.267f, 0.077f, 1.000f };

						break;

					case 66:
						linescolors = { 0.129f, 0.774f, 0.986f, 1.000f };

						break;
					case 67:
						linescolors = { 0.168f, 0.792f, 0.792f, 1.000f };

						break;
					case 68:
						linescolors = { 1.000f, 0.237f, 0.945f, 1.000f };

						break;
					case 69:
						linescolors = { 1.000f, 0.126f, 0.430f, 1.000f };

						break;
					case  70:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };

						break;
					case 71:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };

						break;
					case 72:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };

						break;
					case 73:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };

						break;
					case 74:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };

						break;
					case 75:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

						break;
					case 76:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

						break;
					case 77:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

						break;
					case 78:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

						break;
					case 79:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };

						break;
					case 80:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

						break;
					case 81:
						linescolors = { 1.000f, 0.033f, 0.129f, 1.000f };

						break;
					case 82:
						linescolors = { 1.000f, 0.033f, 0.290f, 1.000f };

						break;
					case 83:
						linescolors = { 1.000f, 0.033f, 0.450f, 1.000f };

						break;
					case 84:
						linescolors = { 1.000f, 0.033f, 0.578f, 1.000f };

						break;
					case 85:
						linescolors = { 1.000f, 0.033f, 0.802f, 1.000f };

						break;

					case 86:
						linescolors = { 0.973f, 0.033f, 1.000f, 1.000f };

						break;
					case 87:
						linescolors = { 0.781f, 0.033f, 1.000f, 1.000f };

						break;
					case 88:
						linescolors = { 0.557f, 0.033f, 1.000f, 1.000f };

						break;
					case 89:
						linescolors = { 0.033f, 0.375f, 1.000f, 1.000f };

						break;
					case  90:
						linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };

						break;
					case 91:
						linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };

						break;
					case 92:
						linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };

						break;
					case 93:
						linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };

						break;
					case 94:
						linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };

						break;
					case 95:
						linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

						break;

					case 96:
						linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

						break;
					case 97:
						linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

						break;
					case 98:
						linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

						break;
					case 99:
						linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };

						break;
					case  100:
						linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

						break;
					default:

						linescolors = Colors::playerline;
						bonescolors = Colors::playerbone;
						fullboxcolor = Colors::playerbox;
						cornerboxcolor = Colors::playercorner;
						break;
					}



					


					dist = std::to_string(Distance) + "M";



					temp = AActor.Name.c_str();

					teamids = AActor.TeamId;



					if (Setting::Flagimge)
					{
#pragma region DrowFlags

						if (AActor.Nation == "JM")
						{
							DrawImage(JMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "G1")
						{
							DrawImage(G1FLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AF")
						{
							DrawImage(AFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AL")
						{
							DrawImage(ALFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "DZ")
						{
							DrawImage(DZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AS")
						{
							DrawImage(ASFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AD")
						{
							DrawImage(ADFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AO")
						{
							DrawImage(AOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AI")
						{
							DrawImage(AIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AQ")
						{
							DrawImage(AQFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AG")
						{
							DrawImage(AGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AR")
						{
							DrawImage(ARFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AM")
						{
							DrawImage(AMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AW")
						{
							DrawImage(AWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AU")
						{
							DrawImage(AUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AT")
						{
							DrawImage(ATFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AZ")
						{
							DrawImage(AZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BS")
						{
							DrawImage(BSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BH")
						{
							DrawImage(BHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BD")
						{
							DrawImage(BDFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BB")
						{
							DrawImage(BBFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BY")
						{
							DrawImage(BYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BE")
						{
							DrawImage(BEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BZ")
						{
							DrawImage(BZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BJ")
						{
							DrawImage(BJFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BM")
						{
							DrawImage(BMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BT")
						{
							DrawImage(BTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BO")
						{
							DrawImage(BOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BQ")
						{
							DrawImage(BQFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BA")
						{
							DrawImage(BAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BW")
						{
							DrawImage(BWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BV")
						{
							DrawImage(BVFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BR")
						{
							DrawImage(BRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IO")
						{
							DrawImage(IOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BN")
						{
							DrawImage(BNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BG")
						{
							DrawImage(BGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BF")
						{
							DrawImage(BFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BI")
						{
							DrawImage(BIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CV")
						{
							DrawImage(CVFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KH")
						{
							DrawImage(KHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CM")
						{
							DrawImage(CMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CA")
						{
							DrawImage(CAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KY")
						{
							DrawImage(KYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CF")
						{
							DrawImage(CFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TD")
						{
							DrawImage(TDFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CL")
						{
							DrawImage(CLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CN")
						{
							DrawImage(CNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CX")
						{
							DrawImage(CXFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CC")
						{
							DrawImage(CCFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CO")
						{
							DrawImage(COFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KM")
						{
							DrawImage(KMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CD")
						{
							DrawImage(CDFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CG")
						{
							DrawImage(CGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CK")
						{
							DrawImage(CKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CR")
						{
							DrawImage(CRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "HR")
						{
							DrawImage(HRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CU")
						{
							DrawImage(CUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CW")
						{
							DrawImage(CWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CY")
						{
							DrawImage(CYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CZ")
						{
							DrawImage(CZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CI")
						{
							DrawImage(CIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "DK")
						{
							DrawImage(DKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "DJ")
						{
							DrawImage(DJFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "DM")
						{
							DrawImage(DMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "DO")
						{
							DrawImage(DOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "EC")
						{
							DrawImage(ECFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "EG")
						{
							DrawImage(EGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SV")
						{
							DrawImage(SVFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GQ")
						{
							DrawImage(GQFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ER")
						{
							DrawImage(ERFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "EE")
						{
							DrawImage(EEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SZ")
						{
							DrawImage(SZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ET")
						{
							DrawImage(ETFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "FK")
						{
							DrawImage(FKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "FO")
						{
							DrawImage(FOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "FJ")
						{
							DrawImage(FJFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "FI")
						{
							DrawImage(FIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "FR")
						{
							DrawImage(FRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GF")
						{
							DrawImage(GFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PF")
						{
							DrawImage(PFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TF")
						{
							DrawImage(TFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GA")
						{
							DrawImage(GAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GM")
						{
							DrawImage(GMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GE")
						{
							DrawImage(GEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "DE")
						{
							DrawImage(DEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GH")
						{
							DrawImage(GHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GI")
						{
							DrawImage(GIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GR")
						{
							DrawImage(GRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GL")
						{
							DrawImage(GLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GD")
						{
							DrawImage(GDFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GP")
						{
							DrawImage(GPFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GU")
						{
							DrawImage(GUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GT")
						{
							DrawImage(GTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GG")
						{
							DrawImage(GGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GN")
						{
							DrawImage(GNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GW")
						{
							DrawImage(GWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GY")
						{
							DrawImage(GYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "HT")
						{
							DrawImage(HTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "HM")
						{
							DrawImage(HMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "VA")
						{
							DrawImage(VAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "HN")
						{
							DrawImage(HNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "HK")
						{
							DrawImage(HKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "HU")
						{
							DrawImage(HUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "JP")
						{
							DrawImage(JPFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "JE")
						{
							DrawImage(JEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "JO")
						{
							DrawImage(JOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KZ")
						{
							DrawImage(KZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KE")
						{
							DrawImage(KEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KI")
						{
							DrawImage(KIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KP")
						{
							DrawImage(KPFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KR")
						{
							DrawImage(KRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KW")
						{
							DrawImage(KWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KG")
						{
							DrawImage(KGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LA")
						{
							DrawImage(LAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LV")
						{
							DrawImage(LVFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LB")
						{
							DrawImage(LBFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LS")
						{
							DrawImage(LSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LR")
						{
							DrawImage(LRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LY")
						{
							DrawImage(LYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LI")
						{
							DrawImage(LIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LT")
						{
							DrawImage(LTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LU")
						{
							DrawImage(LUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MO")
						{
							DrawImage(MOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MG")
						{
							DrawImage(MGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MW")
						{
							DrawImage(MWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MY")
						{
							DrawImage(MYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MV")
						{
							DrawImage(MVFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ML")
						{
							DrawImage(MLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MT")
						{
							DrawImage(MTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MH")
						{
							DrawImage(MHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MQ")
						{
							DrawImage(MQFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MR")
						{
							DrawImage(MRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MU")
						{
							DrawImage(MUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "YT")
						{
							DrawImage(YTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MX")
						{
							DrawImage(MXFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "FM")
						{
							DrawImage(FMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MD")
						{
							DrawImage(MDFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MC")
						{
							DrawImage(MCFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MN")
						{
							DrawImage(MNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ME")
						{
							DrawImage(MEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MS")
						{
							DrawImage(MSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MA")
						{
							DrawImage(MAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MZ")
						{
							DrawImage(MZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MM")
						{
							DrawImage(MMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NA")
						{
							DrawImage(NAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NR")
						{
							DrawImage(NRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NP")
						{
							DrawImage(NPFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NL")
						{
							DrawImage(NLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NC")
						{
							DrawImage(NCFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NZ")
						{
							DrawImage(NZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NI")
						{
							DrawImage(NIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NE")
						{
							DrawImage(NEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NG")
						{
							DrawImage(NGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NU")
						{
							DrawImage(MUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NF")
						{
							DrawImage(NFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MP")
						{
							DrawImage(NPFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "NO")
						{
							DrawImage(NOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "OM")
						{
							DrawImage(OMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PK")
						{
							DrawImage(PKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PW")
						{
							DrawImage(PWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PS")
						{
							DrawImage(PSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PA")
						{
							DrawImage(PAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PG")
						{
							DrawImage(PGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PY")
						{
							DrawImage(PYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PE")
						{
							DrawImage(PEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PH")
						{
							DrawImage(PHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PN")
						{
							DrawImage(PNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PL")
						{
							DrawImage(PLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PT")
						{
							DrawImage(PTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PR")
						{
							DrawImage(PRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "QA")
						{
							DrawImage(QAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MK")
						{
							DrawImage(MKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "RO")
						{
							DrawImage(ROFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "RU")
						{
							DrawImage(RUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "RW")
						{
							DrawImage(RWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "RE")
						{
							DrawImage(REFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "BL")
						{
							DrawImage(BLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SH")
						{
							DrawImage(SHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "KN")
						{
							DrawImage(KNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LC")
						{
							DrawImage(LCFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "MF")
						{
							DrawImage(MFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "PM")
						{
							DrawImage(PMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "VC")
						{
							DrawImage(VCFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "WS")
						{
							DrawImage(WSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SM")
						{
							DrawImage(SMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ST")
						{
							DrawImage(STFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SA")
						{
							DrawImage(SAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SN")
						{
							DrawImage(SNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "RS")
						{
							DrawImage(RSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SC")
						{
							DrawImage(SCFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SL")
						{
							DrawImage(SLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SG")
						{
							DrawImage(SGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SX")
						{
							DrawImage(SXFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SK")
						{
							DrawImage(SKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SI")
						{
							DrawImage(SIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SB")
						{
							DrawImage(SBFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SO")
						{
							DrawImage(SOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ZA")
						{
							DrawImage(ZAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GS")
						{
							DrawImage(GSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SS")
						{
							DrawImage(SSFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ES")
						{
							DrawImage(ESFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "LK")
						{
							DrawImage(LKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SD")
						{
							DrawImage(SDFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SR")
						{
							DrawImage(SRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SJ")
						{
							DrawImage(SJFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SE")
						{
							DrawImage(SEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "CH")
						{
							DrawImage(CHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "SY")
						{
							DrawImage(SYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TW")
						{
							DrawImage(TWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TJ")
						{
							DrawImage(TJFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TZ")
						{
							DrawImage(TZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TH")
						{
							DrawImage(THFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TL")
						{
							DrawImage(TLFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TG")
						{
							DrawImage(TGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TK")
						{
							DrawImage(TKFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TO")
						{
							DrawImage(TOFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TT")
						{
							DrawImage(TTFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TN")
						{
							DrawImage(TNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TR")
						{
							DrawImage(TRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TM")
						{
							DrawImage(TMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TC")
						{
							DrawImage(TCFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "TV")
						{
							DrawImage(TVFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "UG")
						{
							DrawImage(UGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "UA")
						{
							DrawImage(UAFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AE")
						{
							DrawImage(AEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "GB")
						{
							DrawImage(GBFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "US")
						{
							DrawImage(USFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "UY")
						{
							DrawImage(UYFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "UZ")
						{
							DrawImage(UZFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "VU")
						{
							DrawImage(VUFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "VE")
						{
							DrawImage(VEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "VN")
						{
							DrawImage(VNFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "VG")
						{
							DrawImage(VGFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "VI")
						{
							DrawImage(VIFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "WF")
						{
							DrawImage(WFFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "EH")
						{
							DrawImage(EHFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "YE")
						{
							DrawImage(YEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ZM")
						{
							DrawImage(ZMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ZW")
						{
							DrawImage(ZWFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "AX")
						{
							DrawImage(AXFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IS")
						{
							DrawImage(ISFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IN")
						{
							DrawImage(INFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "ID")
						{
							DrawImage(IDFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IR")
						{
							DrawImage(IRFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IQ")
						{
							DrawImage(IQFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IE")
						{
							DrawImage(IEFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IM")
						{
							DrawImage(IMFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IL")
						{
							DrawImage(ILFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}
						if (AActor.Nation == "IT")
						{
							DrawImage(ITFLAG, Screen.X - 10, Screen.Y -16, 20, 12);
						}

#pragma endregion
					}





					if (Setting::pname)
					{
						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawFilledRectangle(Screen.X + 55, Screen.Y - 15, 120, 13, ImColor(0.0f, 0.f, 0.f, 0.200f));
							if (AActor.Health <= 0)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 12, temp, Screen.X - 60, Screen.Y - 28, DX11::ImGui_DX11::Color::Red, false);
							}
							else
							{
								if (AActor.IsBot)
								{
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 12, temp, Screen.X - 60, Screen.Y - 28, ImColor(bot[0], bot[1], bot[2], bot[3]), false);

								}
								else
								{
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 12, temp, Screen.X - 60, Screen.Y - 28, ImColor(nam[0], nam[1], nam[2], nam[3]), false);

								}

							}
						}
						if (Setting::PlayerAiming) 
							{
								weapon = AActor.weapon.c_str();
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, dissize, weapon, Screen.X, Screen.Y - 30, ImColor(weapon[0], weapon[1], weapon[2], weapon[3]), true);

							}
							if (Setting::PlayerAiming)
							{

							int enemystate = AActor.status;
							std::string stateB = "";
							stateB = std::to_string(enemystate);

							if (stateB == "0") { stateB == "AFK"; }
							else if (stateB == "1") { stateB = "InWater"; }
							else if (stateB == "268435464") { stateB = "PlayEmotion"; }
							else if (stateB == "8") { stateB = "Stand"; }
							else if (stateB == "520" || stateB == "544" || stateB == "656" || stateB == "521" || stateB == "528") { stateB = "Aiming"; }
							else if (stateB == "1680" || stateB == "1672" || stateB == "1673" || stateB == "1032" || stateB == "1544" || stateB == "1545" || stateB == "1033") { stateB = "Peek"; }
							else if (stateB == "9") { stateB = "Walking"; }
							else if (stateB == "11") { stateB = "Running"; }
							else if (stateB == "4194304") { stateB = "Swimming"; }
							else if (stateB == "32784") { stateB = "Reviving"; }
							else if (stateB == "16777224") { stateB = "Climbing"; }
							else if (stateB == "8200" || stateB == "8208") { stateB = "Punching"; }
							else if (stateB == "16" || stateB == "17" || stateB == "19") { stateB = "Crouch"; }
							else if (stateB == "32" || stateB == "33" || stateB == "35") { stateB = "Snake"; }
							else if (stateB == "5445" || stateB == "762" || stateB == "35") { stateB = "Snake"; }
							else if (stateB == "72" || stateB == "73" || stateB == "75") { stateB = "Jumping"; }
							else if (stateB == "264" || stateB == "272" || stateB == "273" || stateB == "288" || stateB == "265" || stateB == "329") { stateB = "Reloading"; }
							else if (stateB == "137" || stateB == "144" || stateB == "201" || stateB == "145" || stateB == "160" || stateB == "649" || stateB == "648" || stateB == "1160" || stateB == "1161" || stateB == "1169") { stateB = "Firing"; }
							else if (stateB == "131070" || stateB == "131071" || stateB == "131072" || stateB == "131073" || stateB == "131074" || stateB == "131075") { stateB = "Knocked"; }
							else if (stateB == "33554440" || stateB == "524296" || stateB == "1048584" || stateB == "524288") { stateB = "Driving"; }
							else if (stateB == "16392" || stateB == "16393" || stateB == "16401" || stateB == "16416" || stateB == "16417" || stateB == "16457") { stateB = "Throwing Bomb"; }
							else if (stateB == "16400" || stateB == "17401" || stateB == "17417" || stateB == "17424" || stateB == "17425") { stateB = "Throwing Bomb"; }
							else
							{
								stateB = std::to_string(enemystate);
							}
							if (Setting::PlayerAiming)
							{

								ImColor warncolor;
								int randomNum = (rand() % 6) + 1;
								if (randomNum == 1)
								{
									warncolor = DX11::ImGui_DX11::Color::Red;
								}
								if (randomNum == 2)
								{
									warncolor = DX11::ImGui_DX11::Color::Black;
								}
								if (randomNum == 3)
								{
									warncolor = DX11::ImGui_DX11::Color::Blue;
								}
								if (randomNum == 4)
								{
									warncolor = DX11::ImGui_DX11::Color::Yellow;
								}
								if (randomNum == 5)
								{
									warncolor = DX11::ImGui_DX11::Color::White;
								}
								if (randomNum == 6)
								{
									warncolor = DX11::ImGui_DX11::Color::Orange;
								}

								if (stateB == "Aiming")
								{
									Text = "Enemy Aiming At You";
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 26, Text, DX11Window::Width / 2, DX11Window::Height / 100 * 14.5f, warncolor, true);
								}
#pragma endregion
							}
						}
				
						if (Setting::style2)
						{

							//Text = AActor.Name + " " + to_string(Distance) + "M";

							if (AActor.Health <= 0)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::nsize, temp, Screen.X, (Screen.Y + Screen.Z), DX11::ImGui_DX11::Color::Red, true);
							}
							else
							{
								if (AActor.IsBot)
								{

									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::nsize, temp, Screen.X, (Screen.Y + Screen.Z), ImColor(bot[0], bot[1], bot[2], bot[3]), true);
								}
								else
								{
									//sa
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::nsize, temp, Screen.X, (Screen.Y + Screen.Z), ImColor(nam[0], nam[1], nam[2], nam[3]), true);


								}
							}



						}


					}

				
					if (Setting::Distancee)
					{
						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::dissize, dist, Screen.X + 20, (Screen.Y + 15 + Screen.Z), DX11::ImGui_DX11::Color::Green2, false);

						}

						if (Setting::style2)
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::dissize, dist, Screen.X, (Screen.Y + 15 + Screen.Z), ImColor(enemy[0], enemy[1], enemy[2], enemy[3]), false);

						}

					}
					if (Setting::weaponenemy)
					{
						weapon = AActor.weapon.c_str();

						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, dissize, weapon, Screen.X, Screen.Y - 30, DX11::ImGui_DX11::Color::White, true);
					}

					if (Setting::phealth)
					{
						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawBlood(Screen.X - 65, Screen.Y - 15, 120, 4.0, AActor.Health);

						}

						if (Setting::style2)
							{
								if (hpbt == 0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);

									if (AActor.Health > 70.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Green);
									}
									if (AActor.Health > 30.0 && AActor.Health <= 70.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Yellow);
									}
									if (AActor.Health > 0.0 && AActor.Health <= 30.0)
									{
										DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * AActor.Health / AActor.HealthMax, DX11::ImGui_DX11::Color::Red);

									}
								}
								else if (hpbt == 1)
								{
									std::string hp100 = "HP : 100";
									std::string hp90 = "HP : 90";
									std::string hp80 = "HP : 80";
									std::string hp60 = "HP : 60";
									std::string hp40 = "HP : 40";
									std::string hp20 = "HP : 20";
									std::string hp10 = "HP : 10";
									std::string hp0 = "HP : 0";

									if (AActor.Health > 99.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp100, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}
									if (AActor.Health > 90.0 && AActor.Health <= 99.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp90, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}
									if (AActor.Health > 80.0 && AActor.Health <= 90.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp80, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}
									if (AActor.Health > 60.0 && AActor.Health <= 80.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp60, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}
									if (AActor.Health > 40.0 && AActor.Health <= 60.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp40, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}
									if (AActor.Health > 20.0 && AActor.Health <= 40.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp20, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}
									if (AActor.Health > 10.0 && AActor.Health <= 20.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp10, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}

									if (AActor.Health > 0.0 && AActor.Health <= 10.0)
									{
										DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::hp1, hp0, Screen.X - 30, Screen.Y + 17, ImColor(hpt[0], hpt[1], hpt[2], hpt[3]), true);

									}
								}
							
					}

					}
					if (Setting::pline)
					{

						if (Setting::style2)
						{

							if (linne == 0)
							{
								DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, linescolors, Setting::plinesize);
							}
							else if (linne == 1)
							{
								DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 5, Colors::playerline, Setting::plinesize);
							}


						}
						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 18, linescolors, Setting::plinesize);

						}
					}
					
					if (Setting::pcorner)
					{
						fullboxcolor = linescolors;
						cornerboxcolor = linescolors;
						if (boxe == 0)
						{
							DX11::ImGui_DX11::CornerBox(Screen.X - Screen.Z / 4 - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, Setting::pcornersize, popcorn / 2, cornerboxcolor);
						}
						else if (boxe == 1)
						{
							DX11::ImGui_DX11::DrawRectangle(Screen.X - (Screen.Z / 4) - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, fullboxcolor, Setting::pfullboxsize);
						}
					}
					if (Setting::Bone)
					{
						bonescolors = linescolors;
						if (Setting::playerBone)
						{
							HeadPos = AActor.HeadPos;
							HeadPos.Z += 7;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, HeadPos, Head, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.ChestPos, Chest, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.PelvisPos, Pelvis, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lSholderPos, lSholder, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rSholderPos, rSholder, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lElbowPos, lElbow, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rElbowPos, rElbow, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lWristPos, lWrist, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rWristPos, rWrist, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lThighPos, lThigh, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rThighPos, rThigh, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lKneePos, lKnee, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rKneePos, rKnee, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.lAnklePos, lAnkle, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(ViewMatrix, AActor.rAnklePos, rAnkle, &Distance)) continue;

							if (skelee == 0)
							{
								DX11::ImGui_DX11::DrawCircle(Head.X, Head.Y, Screen.Z / 12, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, Pelvis.X, Pelvis.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, lSholder.X, lSholder.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, rSholder.X, rSholder.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lSholder.X, lSholder.Y, lElbow.X, lElbow.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rSholder.X, rSholder.Y, rElbow.X, rElbow.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lElbow.X, lElbow.Y, lWrist.X, lWrist.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rElbow.X, rElbow.Y, rWrist.X, rWrist.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, lThigh.X, lThigh.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, rThigh.X, rThigh.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lThigh.X, lThigh.Y, lKnee.X, lKnee.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rThigh.X, rThigh.Y, rKnee.X, rKnee.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lKnee.X, lKnee.Y, lAnkle.X, lAnkle.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rKnee.X, rKnee.Y, rAnkle.X, rAnkle.Y, bonescolors, Setting::pbonesize);
							}
							else if (skelee == 1)
							{
								DX11::ImGui_DX11::DrawCircle(Head.X, Head.Y, Screen.Z / 12, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, Pelvis.X, Pelvis.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, lSholder.X, lSholder.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, rSholder.X, rSholder.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lSholder.X, lSholder.Y, lElbow.X, lElbow.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rSholder.X, rSholder.Y, rElbow.X, rElbow.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lElbow.X, lElbow.Y, lWrist.X, lWrist.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rElbow.X, rElbow.Y, rWrist.X, rWrist.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, lThigh.X, lThigh.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, rThigh.X, rThigh.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lThigh.X, lThigh.Y, lKnee.X, lKnee.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rThigh.X, rThigh.Y, rKnee.X, rKnee.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lKnee.X, lKnee.Y, lAnkle.X, lAnkle.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rKnee.X, rKnee.Y, rAnkle.X, rAnkle.Y, ImColor(skelec[0], skelec[1], skelec[2], skelec[3]), Setting::pbonesize);
							}
						}

					}

				}
			}





			time_t rawtime = mktime(&KeyAuthApp.user_data.expiry);
			struct tm* timeinfo;
			timeinfo = localtime(&rawtime);

			if (Distance < 350)
			{
				if (Setting::TotalEnemy)
				{
					if (watermark)
					{
						
					}
					if (Distance < 350)
					{
						int botcount;
						int playercount;
						if (Setting::TotalEnemy)
						{
							if (Data::AActorList.size() != 0)
							{
								botcount = 0;
								playercount = 0;
								for (int i = 0; i < Data::AActorList.size(); i++)
								{
									if (Data::AActorList[i].Name == " [BOT] ")
									{
										botcount = botcount + 1;
									}
									else
									{
										playercount = playercount + 1;
									}
								}
								ImGui::SetNextWindowSize(ImVec2(110.0f, 23.0f));
								ImGuiStyle& sstyle = ImGui::GetStyle();
								ImVec4* colors = sstyle.Colors;
								ImGuiIO& Io = ImGui::GetIO();
								ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));
								if (ImGui::Begin("ene", 0, Flags21))
								{
									
									std::string player = "Player: ";
									player.append(std::to_string(playercount));
									std::string bot = "Bot: ";
									bot.append(std::to_string(botcount));
									
									ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 0, 0, 255));
									ImGui::Text(player.c_str());
									ImGui::PopStyleColor();
									ImGui::SameLine();
									ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 230, 255));
									ImGui::Text(bot.c_str());
									ImGui::PopStyleColor();
									ImGui::End();
								}
							}
							else
							{
								botcount = 0;
								playercount = 0;
								for (int i = 0; i < Data::AActorList.size(); i++)
								{

								}
								//ImGui::SetNextWindowSize(ImVec2(160.0f, 35.0f));
								ImGuiStyle& sstyle = ImGui::GetStyle();
								ImVec4* colors = sstyle.Colors;
								ImGuiIO& Io = ImGui::GetIO();
								ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));
								if (ImGui::Begin("ene", 0, Flags21))
								{

									std::string Text = ICON_FA_HOME" Area Clear";
									Memory::RestoreHook();
									ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(115, 255, 0, 255));
									ImGui::Text(Text.c_str());
									ImGui::PopStyleColor();
									ImGui::End();
								}
							}

						}
					}
					

					if (Setting::MAgicline && GetAsyncKeyState(VK_LBUTTON))
					{
						for (int i = 0; i < Data::AActorList.size(); i++)
						{


							if (!Algorithm::WorldToScreen(Data::AActorList[i].Position, Screen, &Distance, ViewMatrix)) continue;
							if (currIndex == i)
							{
								DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, DX11Window::Height / 2, Screen.X, Screen.Y - 10, Colors::magicline, 1.8f);
							}
						}


					}
				}
			}

			if (Setting::aimbotposition)
			{
				if (Setting::MagicBullet || Setting::engine == 1 && Setting::Aimbot) {
					if (Setting::curraim == 0)
					{
						Text = "Aim Position : Head";
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 13, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 410, DX11::ImGui_DX11::Color::Green, true);

					}
					if (Setting::curraim == 1)
					{
						Text = "Aim Position : Chest";
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 13, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 410, DX11::ImGui_DX11::Color::Green, true);

					}
					if (Setting::curraim == 2)
					{
						Text = "Aim Position : Pelvis";
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 13, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 410, DX11::ImGui_DX11::Color::Green, true);

					}
				}
			}

			if (Setting::fovcircle)
			{
				if (Data::AActorList.size() != 0)
				{
					
					DX11::ImGui_DX11::DrawCircle(DX11Window::Width / 2, DX11Window::Height / 2, Setting::fovcircleredus, Colors::fovcirclecolor);
				}
			}
			if (Setting::graned)
			{
				for (Item& Item : Data::ItemList)
				{
					if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

					std::string	Textt = Item.Name;
					if (Setting::Esp_Item_Frag && Item.Name == "Frag")
					{
						DX11::ImGui_DX11::DrawFilledRect(Screen.X - 15, Screen.Y, 30, 15, ImColor(0.000f, 0.00f, 0.00f, 0.250f));
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
						DX11::ImGui_DX11::CornerBox(Screen.X - 15, Screen.Y, 30, 15, 0.9f, popcorn2, DX11::ImGui_DX11::Color::Red);

					}

					if (Setting::Esp_Item_Smoke && Item.Name == "Smoke")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Smoke_Color[0], Setting::Esp_Item_Smoke_Color[1], Setting::Esp_Item_Smoke_Color[2], Setting::Esp_Item_Smoke_Color[3]), true);
					}

					if (Setting::Esp_Item_Molotof && Item.Name == "Molotof")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Molotof_Color[0], Setting::Esp_Item_Molotof_Color[1], Setting::Esp_Item_Molotof_Color[2], Setting::Esp_Item_Molotof_Color[3]), true);
					}
					if (Setting::Esp_Item_Molotof && Item.Name == "Burn")
					{
						DX11::ImGui_DX11::DrawFilledRect(Screen.X - 15, Screen.Y, 30, 15, ImColor(0.000f, 0.00f, 0.00f, 0.250f));
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
						DX11::ImGui_DX11::CornerBox(Screen.X - 15, Screen.Y, 30, 15, 0.9f, popcorn2, DX11::ImGui_DX11::Color::Red);
					}
					if (Setting::Esp_Item_Molotof && Item.Name == "frag")
					{

						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
					}

				}
			}
			
			if (!Setting::fightmode)
			{


				if (Setting::ItemsImage)
				{
					if (Setting::deadboxm)
					{
						ImColor color;
						for (int i = 0; i < g_pEsp->lootboxr.size(); i++)
						{
							if (!Algorithm::WorldToScreen(g_pEsp->lootboxr[i].Position, Screen, &Distance, ViewMatrix)) continue;
							if (Distance < 80) {

								DrawImage(PlayerDeadInventoryBox_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);

							}
						}
					}

					if (Setting::AirDropm)
					{


						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";
							std::string air = Item.Name + " " + to_string(Distance) + " M";
							if (Setting::Esp_Item_AirDrop && Item.Name == "[Air Drop]")
							{
								DrawImage(Drop, Screen.X - 10, Screen.Y - 30, 30, 30);
								//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Drop, air, Screen.X, Screen.Y + 20, weapon::Airdrop, true);

							}

						}
					}


					if (Setting::Esp_Item_Smokem)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							std::string	Textt = Item.Name;
							if (Setting::Esp_Item_Smoke && Item.Name == "Smoke")
							{
								DrawImage(BP_Grenade_Smoke_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_Molotofm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Frag && Item.Name == "Frag")
							{

								DrawImage(BP_Grenade_Shoulei_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_Molotofmm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Molotof && Item.Name == "Molotof")
							{
								DrawImage(BP_Grenade_Burn_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}



						}
					}
					if (Setting::Esp_Item_M416m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;
							Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";
							std::string air = Item.Name + " " + to_string(Distance) + " M";
							if (Setting::Esp_Item_M416 && Item.Name == "M416")
							{
								DrawImage(BP_Rifle_M416_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_AKMm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_AKM && Item.Name == "AKM")
							{
								DrawImage(BP_Rifle_AKM_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_SCARLm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_SCARL && Item.Name == "SCAR-L")
							{
								DrawImage(BP_Rifle_SCAR_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_DBSm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_DBS && Item.Name == "DBS")
							{
								DrawImage(BP_ShotGun_DP12_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_M24m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_M24 && Item.Name == "M24")
							{
								DrawImage(BP_Sniper_M24_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Kar98km)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Kar98k && Item.Name == "Kar98k")
							{
								DrawImage(BP_Sniper_Kar98k_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::planm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::plan && Item.Name == "[Plane Drop]")
							{
								//DrawImage(BP_Rifle_M416_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					} //مش معمول
					if (Setting::Esp_Item_DP28m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_DP28 && Item.Name == "DP28")
							{
								DrawImage(BP_Other_DP28_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_M762m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_M762 && Item.Name == "M762")
							{
								DrawImage(BP_Rifle_M762_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Awmm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Awm && Item.Name == "AWM")
							{
								DrawImage(BP_Sniper_AWM_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_FlareGunm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_FlareGun && Item.Name == "Flare Gun")
							{
								DrawImage(BP_Pistol_Flaregun_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Flarem)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Flare && Item.Name == "Flareimo")
							{
								DrawImage(BP_Ammo_Flare_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_Armor3m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_Armor3 && Item.Name == "Armor Lv3")
							{
								DrawImage(PickUp_BP_Armor_Lv3_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_Bag3m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Bag3 && Item.Name == "Bag Lv3")
							{
								DrawImage(PickUp_BP_Bag_Lv3_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_Helmet3m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Helmet3 && Item.Name == "Helmet Lv3")
							{
								DrawImage(PickUp_BP_Helmet_Lv3_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}

					if (Setting::Esp_Item_MedKitm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_MedKit && Item.Name == "Med Kit")
							{
								DrawImage(FirstAidbox_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_FirstAidKitm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;



							if (Setting::Esp_Item_FirstAidKit && Item.Name == "First Aid Kit")
							{
								DrawImage(Firstaid_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}


						}
					}
					if (Setting::Esp_Item_Painkillerm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_Painkiller && Item.Name == "Painkiller")
							{
								DrawImage(Pills_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}


						}
					}
					if (Setting::Esp_Item_EnergyDrinkm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_EnergyDrink && Item.Name == "Energy Drink")
							{
								DrawImage(Drink_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_AdrenalineSyringem)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_AdrenalineSyringe && Item.Name == "Adrenaline Syringe")
							{
								DrawImage(Injection_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}

					if (Setting::Esp_Item_x2m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_x2 && Item.Name == "2x")
							{
								DrawImage(BP_MZJ_2X_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}


						}
					}
					if (Setting::Esp_Item_x3m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;



							if (Setting::Esp_Item_x3 && Item.Name == "3x")
							{
								DrawImage(BP_MZJ_3X_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_x4m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_x4 && Item.Name == "4x")
							{
								DrawImage(BP_MZJ_4X_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_x6m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_x6 && Item.Name == "6x")
							{
								DrawImage(BP_MZJ_6X_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_x8m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_x8 && Item.Name == "8x")
							{
								DrawImage(BP_MZJ_8X_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}

					if (Setting::Esp_Item_Bag1m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Bag1 && Item.Name == "Bag Lv1")
							{
								DrawImage(PickUp_BP_Bag_Lv1_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Bag2m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_Bag2 && Item.Name == "Bag Lv2")
							{
								DrawImage(PickUp_BP_Bag_Lv2_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Helmet1m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Helmet1 && Item.Name == "Helmet Lv1")
							{
								//		DrawImage(BP_Rifle_M416_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}//مش معمول
						}
					}
					if (Setting::Esp_Item_Helmet2m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Helmet2 && Item.Name == "Helmet Lv2")
							{
								DrawImage(PickUp_BP_Helmet_Lv2_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Armor1m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Armor1 && Item.Name == "Armor Lv1")
							{
								DrawImage(PickUp_BP_Armor_Lv1_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
					if (Setting::Esp_Item_Armor2m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Armor2 && Item.Name == "Armor Lv2")
							{
								DrawImage(PickUp_BP_Armor_Lv2_B_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Mk47Mutantm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Mk47Mutant && Item.Name == "Mk47 Mutant")
							{
								DrawImage(BP_Rifle_Mk47_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_M16A4m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_M16A4 && Item.Name == "M16A4")
							{
								DrawImage(BP_Rifle_M16A4_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_G36Cm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_G36C && Item.Name == "G36C")
							{
								DrawImage(BP_Rifle_G36_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_QBZm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_QBZ && Item.Name == "QBZ")
							{
								DrawImage(BP_Rifle_QBZ_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_QBUm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_QBU && Item.Name == "QBU")
							{
								DrawImage(BP_Sniper_QBU_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_SLRm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_SLR && Item.Name == "SLR")
							{
								DrawImage(BP_Sniper_SLR_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Mini14m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Mini14 && Item.Name == "Mini-14")
							{
								DrawImage(BP_Sniper_Mini14_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_PP19m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_PP19 && Item.Name == "PP19")
							{
								DrawImage(BP_MachineGun_PP19_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_TommyGunm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_TommyGun && Item.Name == "Tommy Gun")
							{
								DrawImage(BP_MachineGun_TommyGun_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_MP5Km)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_MP5K && Item.Name == "MP5K")
							{
								DrawImage(BP_MachineGun_MP5K_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_UMP9m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_UMP9 && Item.Name == "UMP9")
							{
								DrawImage(BP_MachineGun_UMP9_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Vectorm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Vector && Item.Name == "Vector")
							{
								DrawImage(BP_MachineGun_Vector_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Uzim)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_Uzi && Item.Name == "Uzi")
							{
								DrawImage(BP_MachineGun_Uzi_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Holom)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_Holo && Item.Name == "Holo")
							{
								DrawImage(BP_MZJ_QX_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_M249m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;


							if (Setting::Esp_Item_M249 && Item.Name == "M249")
							{
								DrawImage(BP_Other_M249_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}

						}
					}
					if (Setting::Esp_Item_Mk12m)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

							if (Setting::Esp_Item_Mk12 && Item.Name == "MK12")
							{
								//		DrawImage(BP_Rifle_M416_Wrapper_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}//مش معمول
						}
					}
					if (Setting::Esp_Item_762mmm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;



							if (Setting::Esp_Item_762mm && Item.Name == "7.62mm")
							{
								DrawImage(BP_Ammo_762mm_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}


						}
					}
					if (Setting::Esp_Item_556mmm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;



							if (Setting::Esp_Item_556mm && Item.Name == "5.56mm")
							{
								DrawImage(BP_Ammo_556mm_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}


						}
					}
					if (Setting::Esp_Item_9mmm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;



							if (Setting::Esp_Item_9mm && Item.Name == "9mm")
							{
								DrawImage(BP_Ammo_9mm_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}


						}
					}
					if (Setting::Esp_Item_45ACPm)
					{
						for (Item& Item : Data::ItemList)
						{
							if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;



							if (Setting::Esp_Item_45ACP && Item.Name == "45ACP")
							{
								DrawImage(BP_Ammo_45ACP_Pickup_Citems, Screen.X - 10, Screen.Y - 30, 30, 30);
							}
						}
					}
				}
				if (Setting::deadbox)
				{
					ImColor color;
					for (int i = 0; i < g_pEsp->lootboxr.size(); i++)
					{

						if (!Algorithm::WorldToScreen(g_pEsp->lootboxr[i].Position, Screen, &Distance, Esp::ViewMatrix)) continue;
							std::string dead = "Loot-Box  " + to_string(Distance) + "M";
						if (Distance >= 200 || Distance <= 5) continue;

							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, dead, Screen.X, Screen.Y + 13, Colors::deadbox, false);
						if (Setting::playerdeadbox)
						{


							for (int k = 0; k < g_pEsp->lootboxr[i].boxitem.size(); k++)
							{
								color = g_pEsp->lootboxr[i].boxitem[k].colorcod;
								std::string text = g_pEsp->lootboxr[i].boxitem[k].Displayname;

								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, text, Screen.X, Screen.Y - 15 * (k), g_pEsp->lootboxr[i].boxitem[k].colorcod, false);

								if (Setting::bg)
								{
									DX11::ImGui_DX11::DrawFilledRect(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, ImColor(0.000f, 0.00f, 0.00f, 0.200f));


								}
								if (Setting::itemrect)
								{
									if (Setting::redioption == 1)
									{
										DX11::ImGui_DX11::CornerBox(Screen.X - 10, Screen.Y - 15 * (k), 110, 15, 0.6f, popcorn2, Colors::bgcorner);

									}

									if (Setting::redioption == 2)
									{
										DX11::ImGui_DX11::DrawRectangle(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, Colors::bgcorner, 0.6f);

									}


								}

							}

						}

					}


				}
				if (Setting::healthitem)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

						Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";

						if (Setting::Esp_Item_MedKit && Item.Name == "Med Kit")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_MedKit_Color[0], Setting::Esp_Item_MedKit_Color[1], Setting::Esp_Item_MedKit_Color[2], Setting::Esp_Item_MedKit_Color[3]), true);
					
						}

						if (Setting::Esp_Item_FirstAidKit && Item.Name == "First Aid Kit")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_FirstAidKit_Color[0], Setting::Esp_Item_FirstAidKit_Color[1], Setting::Esp_Item_FirstAidKit_Color[2], Setting::Esp_Item_FirstAidKit_Color[3]), true);
					

						}

						if (Setting::Esp_Item_Painkiller && Item.Name == "Painkiller")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Painkiller_Color[0], Setting::Esp_Item_Painkiller_Color[1], Setting::Esp_Item_Painkiller_Color[2], Setting::Esp_Item_Painkiller_Color[3]), true);
						}

						if (Setting::Esp_Item_EnergyDrink && Item.Name == "Energy Drink")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_EnergyDrink_Color[0], Setting::Esp_Item_EnergyDrink_Color[1], Setting::Esp_Item_EnergyDrink_Color[2], Setting::Esp_Item_EnergyDrink_Color[3]), true);
						}
						if (Setting::Esp_Item_AdrenalineSyringe && Item.Name == "Adrenaline")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_EnergyDrink_Color[0], Setting::Esp_Item_EnergyDrink_Color[1], Setting::Esp_Item_EnergyDrink_Color[2], Setting::Esp_Item_EnergyDrink_Color[3]), true);
						}


					}
				}
				if (Setting::scope)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

						Text = Item.Name;// +" " + to_string(Distance) + " M";
						if (Setting::Esp_Item_x2 && Item.Name == "2x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x2_Color[0], Setting::Esp_Item_x2_Color[1], Setting::Esp_Item_x2_Color[2], Setting::Esp_Item_x2_Color[3]), true);
						}

						if (Setting::Esp_Item_x3 && Item.Name == "3x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x3_Color[0], Setting::Esp_Item_x3_Color[1], Setting::Esp_Item_x3_Color[2], Setting::Esp_Item_x3_Color[3]), true);
						}

						if (Setting::Esp_Item_x4 && Item.Name == "4x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x4_Color[0], Setting::Esp_Item_x4_Color[1], Setting::Esp_Item_x4_Color[2], Setting::Esp_Item_x4_Color[3]), true);
						
						}

						if (Setting::Esp_Item_x6 && Item.Name == "6x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x6_Color[0], Setting::Esp_Item_x6_Color[1], Setting::Esp_Item_x6_Color[2], Setting::Esp_Item_x6_Color[3]), true);
						
						}

						if (Setting::Esp_Item_x8 && Item.Name == "8x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x8_Color[0], Setting::Esp_Item_x8_Color[1], Setting::Esp_Item_x8_Color[2], Setting::Esp_Item_x8_Color[3]), true);
						
						}
					}

				}
				if (Setting::allitemss)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, ViewMatrix)) continue;

						Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";

						if (Setting::Esp_Item_Bag1 && Item.Name == "Bag L.1")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Bag1_Color[0], Setting::Esp_Item_Bag1_Color[1], Setting::Esp_Item_Bag1_Color[2], Setting::Esp_Item_Bag1_Color[3]), true);
						}

						if (Setting::Esp_Item_Bag2 && Item.Name == "Bag L.2")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Bag2_Color[0], Setting::Esp_Item_Bag2_Color[1], Setting::Esp_Item_Bag2_Color[2], Setting::Esp_Item_Bag2_Color[3]), true);
						}

						if (Setting::Esp_Item_Helmet1 && Item.Name == "Helmet L.1")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Helmet1_Color[0], Setting::Esp_Item_Helmet1_Color[1], Setting::Esp_Item_Helmet1_Color[2], Setting::Esp_Item_Helmet1_Color[3]), true);
						}

						if (Setting::Esp_Item_Helmet2 && Item.Name == "Helmet L.2")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Helmet2_Color[0], Setting::Esp_Item_Helmet2_Color[1], Setting::Esp_Item_Helmet2_Color[2], Setting::Esp_Item_Helmet2_Color[3]), true);
						}

						if (Setting::Esp_Item_Armor1 && Item.Name == "Armor L.1")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Armor1_Color[0], Setting::Esp_Item_Armor1_Color[1], Setting::Esp_Item_Armor1_Color[2], Setting::Esp_Item_Armor1_Color[3]), true);
						}

						if (Setting::Esp_Item_Armor2 && Item.Name == "Armor L.2")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Armor2_Color[0], Setting::Esp_Item_Armor2_Color[1], Setting::Esp_Item_Armor2_Color[2], Setting::Esp_Item_Armor2_Color[3]), true);
						}


						if (Setting::Esp_Item_Mk47Mutant && Item.Name == "Mk47 Mutant")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Mk47Mutant_Color[0], Setting::Esp_Item_Mk47Mutant_Color[1], Setting::Esp_Item_Mk47Mutant_Color[2], Setting::Esp_Item_Mk47Mutant_Color[3]), true);
						}

						if (Setting::Esp_Item_M16A4 && Item.Name == "M16A4")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_M16A4_Color[0], Setting::Esp_Item_M16A4_Color[1], Setting::Esp_Item_M16A4_Color[2], Setting::Esp_Item_M16A4_Color[3]), true);
						}

						if (Setting::Esp_Item_G36C && Item.Name == "G36C")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_G36C_Color[0], Setting::Esp_Item_G36C_Color[1], Setting::Esp_Item_G36C_Color[2], Setting::Esp_Item_G36C_Color[3]), true);
						}

						if (Setting::Esp_Item_QBZ && Item.Name == "QBZ")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_QBZ_Color[0], Setting::Esp_Item_QBZ_Color[1], Setting::Esp_Item_QBZ_Color[2], Setting::Esp_Item_QBZ_Color[3]), true);
						}

						if (Setting::Esp_Item_QBU && Item.Name == "QBU")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_QBU_Color[0], Setting::Esp_Item_QBU_Color[1], Setting::Esp_Item_QBU_Color[2], Setting::Esp_Item_QBU_Color[3]), true);
						}

						if (Setting::Esp_Item_SLR && Item.Name == "SLR")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_SLR_Color[0], Setting::Esp_Item_SLR_Color[1], Setting::Esp_Item_SLR_Color[2], Setting::Esp_Item_SLR_Color[3]), true);
						}

						if (Setting::Esp_Item_Mini14 && Item.Name == "Mini-14")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Mini14_Color[0], Setting::Esp_Item_Mini14_Color[1], Setting::Esp_Item_Mini14_Color[2], Setting::Esp_Item_Mini14_Color[3]), true);
						}



						if (Setting::Esp_Item_PP19 && Item.Name == "PP19")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_PP19_Color[0], Setting::Esp_Item_PP19_Color[1], Setting::Esp_Item_PP19_Color[2], Setting::Esp_Item_PP19_Color[3]), true);
						}

						if (Setting::Esp_Item_TommyGun && Item.Name == "Tommy Gun")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_TommyGun_Color[0], Setting::Esp_Item_TommyGun_Color[1], Setting::Esp_Item_TommyGun_Color[2], Setting::Esp_Item_TommyGun_Color[3]), true);
						}

						if (Setting::Esp_Item_MP5K && Item.Name == "MP5K")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_MP5K_Color[0], Setting::Esp_Item_MP5K_Color[1], Setting::Esp_Item_MP5K_Color[2], Setting::Esp_Item_MP5K_Color[3]), true);
						}

						if (Setting::Esp_Item_UMP9 && Item.Name == "UMP9")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_UMP9_Color[0], Setting::Esp_Item_UMP9_Color[1], Setting::Esp_Item_UMP9_Color[2], Setting::Esp_Item_UMP9_Color[3]), true);
						}

						if (Setting::Esp_Item_Vector && Item.Name == "Vector")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Vector_Color[0], Setting::Esp_Item_Vector_Color[1], Setting::Esp_Item_Vector_Color[2], Setting::Esp_Item_Vector_Color[3]), true);
						}

						if (Setting::Esp_Item_Uzi && Item.Name == "Uzi")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Uzi_Color[0], Setting::Esp_Item_Uzi_Color[1], Setting::Esp_Item_Uzi_Color[2], Setting::Esp_Item_Uzi_Color[3]), true);
						}

						if (Setting::Esp_Item_762mm && Item.Name == "7.62mm")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_762mm_Color[0], Setting::Esp_Item_762mm_Color[1], Setting::Esp_Item_762mm_Color[2], Setting::Esp_Item_762mm_Color[3]), true);
						}

						if (Setting::Esp_Item_556mm && Item.Name == "5.56mm")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_556mm_Color[0], Setting::Esp_Item_556mm_Color[1], Setting::Esp_Item_556mm_Color[2], Setting::Esp_Item_556mm_Color[3]), true);
						}

						if (Setting::Esp_Item_9mm && Item.Name == "9mm")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_9mm_Color[0], Setting::Esp_Item_9mm_Color[1], Setting::Esp_Item_9mm_Color[2], Setting::Esp_Item_9mm_Color[3]), true);
						}

						if (Setting::Esp_Item_45ACP && Item.Name == "45ACP")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_45ACP_Color[0], Setting::Esp_Item_45ACP_Color[1], Setting::Esp_Item_45ACP_Color[2], Setting::Esp_Item_45ACP_Color[3]), true);
						}

						if (Setting::Esp_Item_Holo && Item.Name == "Holo")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Holo_Color[0], Setting::Esp_Item_Holo_Color[1], Setting::Esp_Item_Holo_Color[2], Setting::Esp_Item_Holo_Color[3]), true);
						}
						if (Setting::Esp_Item_M249 && Item.Name == "M249")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::M249, true);
					
						}

						if (Setting::Esp_Item_Mk12 && Item.Name == "MK12")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::MK12, true);
						}


					}
				}

				if (Setting::Vehicle)
				{
					for (Vehicle& Vehicle : Data::VehicleList)
					{
						if (!Algorithm::WorldToScreen(Vehicle.Position, Screen, &Distance, ViewMatrix)) continue;

						Text = Vehicle.Name + " | " + to_string(Distance) + " M";
						/*if (Vehicle.hp < 0)
						{*/
						//vahicle_item
						if (Vehicle.hp > 120 || Vehicle.hp < 0)
							//if (Vehicle.hp > 120 || Vehicle.hp < 0 || Screen.Z < 0.001f || Distance < 10)
							continue;
						if (Setting::hp)
						{
							DX11::ImGui_DX11::DrawBlood(Screen.X - 30, Screen.Y + 23, 80.0f, 4.0f, Vehicle.hp);
						}
						if (Setting::feul)
						{

							std::string fuel;
							fuel.append("(HP: ").append(std::to_string((int)(Vehicle.hp)).append("- GAS: ").append(std::to_string((int)(Vehicle.oil)).append("%)")));
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::vehisize, fuel, Screen.X, Screen.Y + 17, ImColor(vehicle[0], vehicle[1], vehicle[2], vehicle[3]), true);
						}
						if (Setting::vahicle_item && Vehicle.Name == "CoupeRB")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Monster")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}

						if (Setting::vahicle_item && Vehicle.Name == "BRDM")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Scooter")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Motorcycle")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Snowmobile")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Tuk")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Buggy")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Sportsa")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Sports")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Dacia")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::vahicle_item && Vehicle.Name == "Rony")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::Esp_Item_AKM && Vehicle.Name == "UAZ")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::Esp_Item_AKM && Vehicle.Name == "Minibus")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::Esp_Item_AKM && Vehicle.Name == "PG117")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::Esp_Item_AKM && Vehicle.Name == "Aquarail")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}
						if (Setting::Esp_Item_AKM && Vehicle.Name == "Plane")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}
						}

						if (Setting::Esp_Item_AKM && Vehicle.Name == "BigFoot")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);

							}

						}
						if (Setting::Esp_Item_AKM && Vehicle.Name == "Coupe")
						{
							if (Vehicle.driving)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, vehisize, Text, Screen.X, Screen.Y, Colors::vehicle, true);
//join @vipsourcecode for more free sources
							}

						}
					}
				}
			}
		}


		ImGui::Render();
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
		DX11::EndDraw();

		std::this_thread::sleep_for(std::chrono::milliseconds(3));

	}
}
//join @vipsourcecode for more free sources