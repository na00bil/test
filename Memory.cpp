#include "Memory.h"
#include "Aimbot.h"
#include<thread>


BYTE MagicBulletShell[60] = //Updated Shell Code
{
		0xC7, 0x45, 0x78, 0x00, 0x00, 0x00, 0x00,   // mov[ebp + 78],00000000 
		0x83, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x01,   // cmp dword ptr[00000000],01 
		0x74, 0x0E,   // je 0000001E
		0x60,   // pushad
		0x8B, 0x5D, 0x50,   // mov ebx,[ebp + 50]
		0x8B, 0x53, 0x18,   // mov edx,[ebx + 18]
		0x8A, 0x02,   // mov al,[edx]
		0x3C, 0x8C,   // cmp al,00
		0x74, 0x02,   // je 0000001F
		0x61,   // popad
		0xC3,   // ret
		0x8A, 0x42, 0x01,   // mov al,[edx + 01]
		0x3C, 0x84,   // cmp al,00
		0x75, 0x14,   // jne 0000003A
		0xC7, 0x83, 0x2D0, 0x02, 0x00, 0x00, 0x45, 0x4D, 0x49, 0x52,    // mov[ebx + 00000270],00000000 
		0xC7, 0x83, 0x2D4, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // mov[ebx + 00000274],00000000 
		0xEB, 0xE1    // jmp 0000001D
};

BYTE MagicBulletSearch1[] = { 0x66, 0x0F, 0x7E, '?',  0xD0, 0x02, 0x00, 0x00, 0xC7, 0x45, 0x78, 0x50  }; // Need update
BYTE MagicBulletSearch2[] = {  0x66, 0x0F, 0x7E, 0xB9, 0xD0, 0x02, 0x00, 0x00, 0xC7, 0x45, 0x78, 0x50 }; // Need update 

DWORD MagicBulletAddress = 0;
vector<DWORD_PTR> MagicBulletList = {};
INT MagicBulletHook = 0;
BYTE RealByteCode[7];

VOID GetMagicAddress()
{
	std::vector<DWORD_PTR> FoundedBase;

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x20000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x20000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase); //0x0D000000, 0x10000000
	}

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		if (Utility::ReadMemoryEx<BYTE>(FoundedBase[i] + 0xC) == 0x7D) // Need update
		{
			MagicBulletList.push_back(FoundedBase[i]);
			MagicBulletAddress = FoundedBase[i];
		}
	}

	FoundedBase.clear();
}
VOID InitializeMagic()
{
	INT Addv = MagicBulletAddress;

	WriteProcessMemory(Game::hProcess, (LPVOID)MagicBulletHook, &MagicBulletShell, sizeof(MagicBulletShell), 0);

	MagicBulletHook = (INT)VirtualAllocEx(Game::hProcess, 0, 500, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	WriteProcessMemory(Game::hProcess, (LPVOID)MagicBulletHook, &MagicBulletShell, sizeof(MagicBulletShell), 0);

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}
	if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}

	Utility::WriteMemoryEx<INT>(MagicBulletHook + 9, MagicBulletHook + 0x5E);
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
	WriteProcessMemory(Game::hProcess, (LPVOID)(MagicBulletHook), &RealByteCode, sizeof(RealByteCode), 0);
}

VOID HookCall(INT Address, INT HookAdress)
{

	//E8 67 23 E5 A7 90 90
	BYTE Shell[7] = { 0xE8, 0x00, 0x00, 0x0, 0x00, 0x90, 0x90 };
	*(INT*)(Shell + 1) = (INT)(HookAdress - Address - 5);
	WriteProcessMemory(Game::hProcess, (LPVOID)Address, &Shell, sizeof(Shell), 0);
}

bool IsEqual(BYTE Array1[], BYTE Array2[])
{
	for (int i = 0; i < 6; i++)
	{
		if (Array1[i] != Array2[i])
		{
			return false;
		}
	}

	return true;
}

bool Hooked(int Address)
{
	unsigned char Tmp[7];
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Address + 0x8), &Tmp, sizeof(Tmp), 0);

	if ((Tmp[0] == 0xE8 && Tmp[5] == 0x90 && Tmp[6] == 0x90))
	{
		return true;
	}

	return false;
}

VOID HookMagic()
{

	for (DWORD_PTR& Addv : MagicBulletList)
	{
		BYTE Tmp[7];
		ReadProcessMemory(Game::hProcess, (LPCVOID)((int)Addv + 0x8), &Tmp, sizeof(Tmp), 0);

		if (IsEqual(Tmp, RealByteCode))
		{
			HookCall((INT)(Addv + 0x8), (INT)MagicBulletHook);
		}
		BYTE dat = 0x01;
	}
}

VOID Memory::RestoreHook()
{
	for (DWORD_PTR& Addv : MagicBulletList)
	{
		if (Hooked(Addv))
		{
			WriteProcessMemory(Game::hProcess, (LPVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
		}
	}
}

VECTOR3 Subtract(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result;
	Result.X = Src.X - Dst.X;
	Result.Y = Src.Y - Dst.Y;
	Result.Z = Src.Z - Dst.Z;
	return Result;
}

float Magnitude(VECTOR3 Vec)
{
	return sqrtf(Vec.X * Vec.X + Vec.Y * Vec.Y + Vec.Z * Vec.Z);
}

float GetDistance(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result = Subtract(Src, Dst);
	return Magnitude(Result);
}

VECTOR3 NormalizeVec(VECTOR3 Vector)
{
	float Length = Magnitude(Vector);

	Vector.X /= Length;
	Vector.Y /= Length;
	Vector.Z /= Length;

	return Vector;
}
float Distance(VECTOR2 value1, VECTOR2 value2)
{
	float x = value1.X - value2.X;
	float y = value1.Y - value2.Y;

	return (float)std::sqrt((x * x) + (y * y));
}

float BulletDrop(float TravelTime)
{
	return (TravelTime * TravelTime * 980 / 2);
}
bool Fov(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR2 PlayerW2SBone, float FovRadius)
{
	VECTOR2 Cenpoint;
	Cenpoint.X = PlayerW2SBone.X - (OverlayScreenWidth / 2);
	Cenpoint.Y = PlayerW2SBone.Y - (OverlayScreenHeight / 2);

	if (Cenpoint.X * Cenpoint.X + Cenpoint.Y * Cenpoint.Y <= FovRadius * FovRadius)
	{
		return true;
	}


	return false;
}
VECTOR2 GetMagicCoordinates()
{
	VECTOR2 Coordinate;
	Coordinate.X = 0;
	Coordinate.Y = 0;
	VECTOR3 HeadPos;
	HeadPos.X = 0;
	HeadPos.Y = 0;
	HeadPos.Z = 0;
	VECTOR2 Screen;
	Screen.X = 0;
	Screen.Y = 0;
	VECTOR3 Velocity;
	Velocity.X = 0;
	Velocity.Y = 0;
	Velocity.Z = 0;
	FLOAT TargetDistance = 9999.0f;
	FLOAT CrossDist = 0;
	INT Distance4 = 0;
	VECTOR3 posi;
	//bool isEnemyInsideFOV = false;
	/**/
	for (AActor& AActor : Data::AActorList)
	{
		/*if (Screen.Z < 0.001f || Distance < 10)
			continue;*/
		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
		{
			if (Setting::fovcircle)
			{
				if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus/*FovRadius*/))
				{
					//no will fix your prop
					HookMagic();
					CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
					if (CrossDist < TargetDistance)
					{
						if (Setting::curraim == 0)
						{
							HeadPos = AActor.HeadPos;
							HeadPos.Z += 7;
						}
						if (Setting::curraim == 1)
						{
							HeadPos = AActor.ChestPos;
						}
						if (Setting::curraim == 2)
						{
							HeadPos = AActor.PelvisPos;
						}
						if (Setting::curraim == 3)
						{
							HeadPos = AActor.rAnklePos;
						}
						if (Setting::knocked)
						{
							if (AActor.Health <= 0)
							{
								Memory::RestoreHook();
								continue;
							}
						}
						if (Setting::SkipBots)
						{
							if (AActor.IsBot)
							{
								Memory::RestoreHook();
								continue;
							}
						}
						TargetDistance = CrossDist;
						Velocity = AActor.Velocity;
					}

				}

			}
			else
			{
				HookMagic();
				if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
				{

					CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));

					if (CrossDist < TargetDistance)
					{
						if (Setting::curraim == 0)
						{
							HeadPos = AActor.HeadPos;
							HeadPos.Z += 7;
						}
						if (Setting::curraim == 1)
						{
							HeadPos = AActor.ChestPos;
						}
						if (Setting::curraim == 2)
						{
							HeadPos = AActor.PelvisPos;
						}
						if (Setting::curraim == 3)
						{
							HeadPos = AActor.rAnklePos;
						}
						if (Setting::knocked) {
							if (AActor.Health <= 0) {
								Memory::RestoreHook();
								continue;
							}
						}
						if (Setting::SkipBots) {
							if (AActor.IsBot) {
								Memory::RestoreHook();
								continue;
							}
						}
						TargetDistance = CrossDist;
						Velocity = AActor.Velocity;
					}
				}
			}

			if (Setting::fovcircle) {
				if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, HeadPos, Screen, &Distance4))
				{
					Memory::RestoreHook();
					continue;

				}
				if (!Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus/*FovRadius*/))
				{
					Memory::RestoreHook();
					continue;
				}
			}
		}
	}
	DWORD MeshAddv = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::Mesh);
	DWORD BodyAddv = MeshAddv + Offset::BodyAddv;
	DWORD BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
	VECTOR3 MyPosition = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);
	float Gravity = 5.24f;
	float AddTime = 30 / 10.0f + 1.0f;
	float Distance = GetDistance(MyPosition, HeadPos) / 100.0f;
	float temp = 1.23f;
	DWORD CurrentReloadWeapon = Utility::ReadMemoryEx<DWORD>(Offset::CurrentReloadWeapon);
	DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrentReloadWeapon + Offset::ShootWeaponEntity);
	float BulletSpeed = Utility::ReadMemoryEx<FLOAT>(ShootWeaponEntity + Offset::BulletFireSpeed) / 650.f;
	//DWORD SceneComponent = Utility::ReadMemoryEx<INT>(Offset::RootComponent + 0x140);//SceneComponent* HomingTargetComponent? old 14c
	//DWORD VehicleCommon = Utility::ReadMemoryEx<INT>(Offset::VehicleCommon + 0x6dc);//VehicleCommonComponent* VehicleCommon? old 6a0
	FLOAT BaseFlyTime = Distance / BulletSpeed;
	FLOAT SecFlyTime = BaseFlyTime * temp;
	float BulletTravelTime = Distance / Offset::BulletFireSpeed;
	float zAssist;

	if (Distance < 5000.f)
		zAssist = 1.8f;
	else if (Distance < 10000.f)
		zAssist = 1.72f;
	else if (Distance < 15000.f)
		zAssist = 1.23f;
	else if (Distance < 20000.f)
		zAssist = 1.24f;
	else if (Distance < 25000.f)
		zAssist = 1.25f;
	else if (Distance < 30000.f)
		zAssist = 1.26f;
	else if (Distance < 35000.f)
		zAssist = 1.27f;
	else if (Distance < 40000.f)
		zAssist = 1.28f;
	else if (Distance < 45000.f)
		zAssist = 1.29f;
	else if (Distance < 50000.f)
		zAssist = 1.30f;
	HeadPos.X += Velocity.X * BulletTravelTime;
	HeadPos.Y += Velocity.Y * BulletTravelTime;
	HeadPos.Z += Velocity.Z * BulletTravelTime * zAssist + 50.5f * 5.72f * BulletTravelTime * BulletTravelTime;
	FLOAT xDif = HeadPos.X - MyPosition.X;
	FLOAT yDif = HeadPos.Y - MyPosition.Y;
	FLOAT zDif = HeadPos.Z - MyPosition.Z;
	float Hyp = sqrt(xDif * xDif + yDif * yDif);
	Coordinate.X = atan2(zDif, Hyp) * 180.0f / 3.1415926535897f;
	Coordinate.Y = atan2(yDif, xDif) * 180.0f / 3.1415926535897f;
	return Coordinate;
}

int Memory::AimFindBestTarget() {
	float targetDistance = 9999.0;
	VECTOR2 retval;
	int dist, headdist;
	int ret;
	for (int i = 0; i < Data::AActorList.size(); i++)
	{
		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;

		VECTOR2 chest;
		VECTOR2 head;
		VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);


		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, chestPos, chest, &dist))
		{
			if (Setting::fovcircle)
			{
				if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, chest, Setting::fovcircleredus/*FovRadius*/))
				{
					float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));
					if (cross_dist < targetDistance)
					{
						ret = i;
						targetDistance = cross_dist;

					}
				}
			}
			else
			{

				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));

				if (cross_dist < targetDistance)
				{
					ret = i;
					targetDistance = cross_dist;

				}

			}
			if (Setting::fovcircle) {
				if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, chestPos, chest, &dist))
				{


				}
				if (!Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, chest, Setting::fovcircleredus/*FovRadius*/))
				{

				}
			}
		}
	}
	return ret;
}
DWORD CurrWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrWeapon);
DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrWeapon + Offset::ShootWeaponEntity);
bool Memory::IsMagicInitialized = false;
VOID Memory::MemoryThread()
{
	static bool BulletKeyState = false;
	VECTOR2 MagicCoordinate;
	VECTOR3 AimRotation;

	while (true)
	{

		try
		{
			if (Data::NetDriver > 0)
			{
				if (Setting::MagicBullet || Setting::engine == 1)
				{
					if (IsMagicInitialized == false)
					{
						GetMagicAddress();
						InitializeMagic();
						IsMagicInitialized = true;
					}
					MagicCoordinate = GetMagicCoordinates();
					if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
					{

						if (IsMagicInitialized == false)
						{
							GetMagicAddress();
							InitializeMagic();
							IsMagicInitialized = true;
						}
						BulletKeyState = true;
						//MagicCoordinate = GetMagicCoordinates();
						Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 44, MagicCoordinate.X);
						Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 54, MagicCoordinate.Y);
						if (IsMagicInitialized == false)
						{
							GetMagicAddress();
							InitializeMagic();
							IsMagicInitialized = true;
						}
					}

					if (GetAsyncKeyState(Setting::MagicBullet) == 0 && BulletKeyState == true && IsMagicInitialized == true)
					{
						BulletKeyState = false;
						RestoreHook();
						MagicBulletList.clear();
						VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
						MagicBulletAddress = 0;
						MagicBulletHook = 0;
						ZeroMemory(RealByteCode, sizeof(RealByteCode));
						IsMagicInitialized = false;
					}
					else if (IsMagicInitialized == false)
					{
						RestoreHook();
						MagicBulletList.clear();
						VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
						MagicBulletAddress = 0;
						MagicBulletHook = 0;
						ZeroMemory(RealByteCode, sizeof(RealByteCode));
						GetMagicAddress();
						InitializeMagic();
						IsMagicInitialized = true;
					}
					if (GetAsyncKeyState('R'))
					{
						RestoreHook();
						MagicBulletList.clear();
						VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
						MagicBulletAddress = 0;
						MagicBulletHook = 0;
						ZeroMemory(RealByteCode, sizeof(RealByteCode));
						IsMagicInitialized = false;
					}

				}
				else if (Setting::MagicBullet == false && IsMagicInitialized == true)
				{
					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					IsMagicInitialized = false;
				}

			}

			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		catch (int e)
		{
			std::cout << e << std::endl;
		}
	}
}
struct FRotator
{
	float Pitch;
	float Yaw;
	float Roll;
};

struct MinimalViewInfo
{
	VECTOR3 Location;
	VECTOR3 LocationLocalSpace;
	FRotator Rotation;
	float FOV;
};

struct CameraCacheEntry
{
	float TimeStamp;
	char chunks[0xC];
	MinimalViewInfo POV;
};
FRotator ToRotator(VECTOR3 local, VECTOR3 target)
{
	VECTOR3 rotation;
	rotation.X = local.X - target.X;
	rotation.Y = local.Y - target.Y;
	rotation.Z = local.Z - target.Z;
	FRotator newViewAngle = { 0 };
	float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
	newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Roll = (float)0.f;
	if (rotation.X >= 0.f)
		newViewAngle.Yaw += 180.0f;
	return newViewAngle;
}
VECTOR3 ClosestToCrosshair()
{
	float targetDistance = 500.0f;
	VECTOR2 retval;
	int dist, headdist;
	VECTOR3 ret;
	for (int i = 0; i < Data::AActorList.size(); i++) {
		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;
		VECTOR2 chest;
		VECTOR2 head;
		//VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 3 * 48); 
		VECTOR3 CurrPos = { 0 };
		if (Setting::curraim == 0) {
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 5 * 48);
			//CurrPos.z += 15; 
		}
		if (Setting::curraim == 1)
		{
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);
		}
		if (Setting::curraim == 2)
		{
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 1 * 48);
		}
		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
		{
			if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
			{
				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));
				if (cross_dist < targetDistance)
				{
					ret = CurrPos;
					targetDistance = cross_dist;
				}
			}
		}
	}
	return ret;
}
void offsetsearch2(int offset, BYTE write[], SIZE_T size, DWORD header)
{
	DWORD pidd = Game::Id;
	HANDLE phandle = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
	DWORD addr = header + offset;
	unsigned long OldProtect;
	unsigned long OldProtect2;
	VirtualProtectEx(phandle, (void*)addr, size, PAGE_EXECUTE_READWRITE, &OldProtect);
	WriteProcessMemory(phandle, (void*)addr, write, size, NULL);
	//NtWriteVirtualMemory(phandle, (BYTE*)addr, write, size, NULL);
	VirtualProtectEx(phandle, (void*)addr, size, OldProtect, NULL);
}
bool GodView = false;
bool fastruncheck = false;
bool MagicX = false;
bool luffy = false;
bool PowerMagic = false;
bool IsChanged = false;
bool Ipadview = false;
void Memory::ShowMenu()
{

}
void Memory::ShowMenu2()
{

}
void Memory::ForceTPP()
{
	while (true)
	{
		Sleep(15);
		if (Setting::ForceTPP)
		{
			//Utility::WriteMemoryEx<bool>(Data::LocalPlayer + Offset::ForceTPP, false);
			int ForceTPP = Utility::ReadMemoryEx<int>(Data::UWorld + 0x128);
			bool IsFPP = Utility::ReadMemoryEx<bool>(ForceTPP + 0x680);//bool IsFPPGameMode;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
			if (IsFPP)
			{
				Utility::WriteMemoryEx<DWORD>(ForceTPP + 0x680, 256);//bool IsFPPGameMode;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
			}
		}
	}
}
void Memory::rapidfire()
{
	float writee = 0.0f;
	while (true)
	{
		Sleep(15);
		DWORD CurrWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrWeapon);
		if (CurrWeapon != 0)
		{
			DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrWeapon + Offset::ShootWeaponEntity);
			if (ShootWeaponEntity != 0)
			{
				if (Setting::rapidfire)
				{
					float ShootInterval = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShootInterval);
					if (ShootInterval != 0.060606f)
					{
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShootInterval, 0.060606f);

					}
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
	}
}
void Memory::nospread()
{
	float writee = 0.0f;
	while (true)
	{
		Sleep(15);
		DWORD CurrWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrWeapon);
		if (CurrWeapon != 0)
		{
			DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrWeapon + Offset::ShootWeaponEntity);
			if (ShootWeaponEntity != 0)
			{
				if (Setting::nospread)
				{
					float GameDeviationFactor = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::GameDeviationFactor);
					float ShotGunHorizontalSpread = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunHorizontalSpread);
					float ShotGunVerticalSpread = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunVerticalSpread);
					if (GameDeviationFactor != 0 && ShotGunHorizontalSpread != 0 && ShotGunVerticalSpread != 0)
					{
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::GameDeviationFactor, 0);
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunHorizontalSpread, 0);
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunVerticalSpread, 0);
					}
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
	}
}
void Memory::instanthit() {
	while (true)
	{
		Sleep(15);

		if (Setting::instanthit)
		{


			DWORD weaponOffSet = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
			if (weaponOffSet != 0)
			{
				DWORD shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + Offset::ShootWeaponEntity);
				if (shootOffset != 0)
				{
					//float x = 800000.0f; 

					float InstantHit = Utility::ReadMemoryEx<FLOAT>(shootOffset + Offset::BulletFireSpeed);

					if (InstantHit != Setting::instantv)
					{
						//WriteProcessMemory(Offsets::pHandle, (void*)(Memory::iGet(weaponOffSet + 3244) + 964), &x, sizeof(float), NULL); 
						Utility::WriteMemoryEx<float>(shootOffset + Offset::BulletFireSpeed, Setting::instantv);
					}
				}
			}
		}
	}
}
void Memory::FastParachute() {
	while (true)
	{
		Sleep(15);
		if (Setting::FastParachute)
		{
			if (GetAsyncKeyState(VK_LSHIFT)) {
				DWORD characterparchute = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0xf10);
				if (characterparchute != 0)
				{
					Utility::WriteMemoryEx<float>(characterparchute + 0x2c0, Setting::landa);

				}
			}
		}
	}
}
void Memory::Quickloot() {
	while (true)
	{
		Sleep(15);
		if (Setting::Quickloot)
		{
			Utility::WriteMemoryEx<bool>(Data::LocalPlayer + 0x1460, false);
		}
	}
}
void Memory::speedcar() {
	while (true)
	{
		Sleep(15);
		if (Setting::speedcar)
		{
			if (GetAsyncKeyState(VK_LSHIFT)) {
				/* DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
	DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
	DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
	DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);*/
				DWORD num12 = Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x144) + 0x700) + 1776) + 0x194) + 88);
				Utility::WriteMemoryEx<float>(num12, Setting::carsv);
				Utility::WriteMemoryEx<float>(num12 + 4, Setting::carsv);
				Utility::WriteMemoryEx<float>(num12 + 8, Setting::carsv);
				Utility::WriteMemoryEx<float>(num12 + 12, Setting::carsv);
				Utility::WriteMemoryEx<float>(num12 + 16, Setting::carsv);
				Utility::WriteMemoryEx<float>(num12 + 20, Setting::carsv);
				Utility::WriteMemoryEx<float>(num12 + 24, Setting::carsv);
				Utility::WriteMemoryEx<float>(num12 + 28, Setting::carsv);
			}
		}
	}
}
void Memory::RapidFire() {


	float writee = 0.0f;
	while (true)
	{
		Sleep(15);
		DWORD CurrWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrWeapon);
		if (CurrWeapon != 0)
		{
			DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrWeapon + Offset::ShootWeaponEntity);
			if (ShootWeaponEntity != 0)
			{
				if (Setting::RapidFire)
				{
					float ShootInterval = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShootInterval);
					if (ShootInterval != 0.060606f)
					{
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShootInterval, 0.060606f);

					}
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
	}
}
void Memory::NoGravity() {


	float writee = 0.0f;
	while (true)
	{
		Sleep(15);
		DWORD CurrWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrWeapon);
		if (CurrWeapon != 0)
		{
			DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrWeapon + Offset::ShootWeaponEntity);
			if (ShootWeaponEntity != 0)
			{
				if (Setting::NoGravity)
				{
					float LaunchGravityScale = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::LaunchGravityScale);
					if (LaunchGravityScale != 0)
					{
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::LaunchGravityScale, 0);

					}
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
	}
}
void Memory::NoSpread() {


	float writee = 0.0f;
	while (true)
	{
		Sleep(15);
		DWORD CurrWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrWeapon);
		if (CurrWeapon != 0)
		{
			DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrWeapon + Offset::ShootWeaponEntity);
			if (ShootWeaponEntity != 0)
			{
				if (Setting::NoSpread)
				{
					float GameDeviationFactor = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::GameDeviationFactor);
					float ShotGunHorizontalSpread = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunHorizontalSpread);
					float ShotGunVerticalSpread = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunVerticalSpread);
					if (GameDeviationFactor != 0 && ShotGunHorizontalSpread != 0 && ShotGunVerticalSpread != 0)
					{
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::GameDeviationFactor, 0);
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunHorizontalSpread, 0);
						Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunVerticalSpread, 0);
					}
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
	}
}
void Memory::FastSwitchWeapon() {


	float writee = 0.0f;
	while (true)
	{
		Sleep(15);
		DWORD CurrWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrWeapon);
		if (CurrWeapon != 0)
		{
			DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrWeapon + Offset::ShootWeaponEntity);
			if (ShootWeaponEntity != 0)
			{
				if (Setting::FastSwitchWeapon)
				{
					float SwitchWeaponSpeedScale = Utility::ReadMemoryEx<float>(Data::LocalPlayer + Offset::SwitchWeaponSpeedScale);
					if (SwitchWeaponSpeedScale != 100)
					{
						Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::SwitchWeaponSpeedScale, 100);

					}
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
	}
}
void Memory::norecoil() {


	float writee = 0.0f;
	while (true)
	{
		Sleep(15);
		/*DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
  DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
  DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
  DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);*/
		DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
		DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
		DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
		DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x328);
		DWORD weaponOffSet = Utility::ReadMemoryEx<INT>(uMyObject + Offset::weaponOffset);
		if (weaponOffSet != 0)
		{
			DWORD shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + Offset::ShootWeapon);

			if (shootOffset != 0)
			{
				/*Utility::WriteMemoryEx<float>(shootOffset + Offset::NoRecoil1, writee);
				Utility::WriteMemoryEx<float>(shootOffset + Offset::NoRecoil2, writee);
				Utility::WriteMemoryEx<float>(shootOffset + Offset::NoRecoil3, writee);*/

			}
		}
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
}
void Memory::down()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::down && IsChanged == false)
		{
			BYTE pattern[] = { 0x95 ,0x2D ,0xBC ,0x41 ,0x00 ,0x80 ,0x6F ,0x39 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			BYTE patter2[] = { 0x00 ,0x00 ,0xC8 ,0x43 ,0x00 ,0x00 ,0x48 ,0x43 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::down && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0xC8 ,0x43 ,0x00 ,0x00 ,0x48 ,0x43 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			BYTE pattern[] = { 0x95 ,0x2D ,0xBC ,0x41 ,0x00 ,0x80 ,0x6F ,0x39 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);

			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::down)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::up()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::up && IsChanged == false)
		{
			BYTE pattern[] = { 0x95 ,0x2D ,0xBC ,0x41 ,0x00 ,0x80 ,0x6F ,0x39 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			BYTE patter2[] = { 0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0x48 ,0x43 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();

			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::up && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0x48 ,0x43 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			BYTE pattern[] = { 0x95 ,0x2D ,0xBC ,0x41 ,0x00 ,0x80 ,0x6F ,0x39 ,0x00 ,0x90 ,0xC7 ,0x3B ,0x01 ,0x00 ,0x00 ,0x27 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::up)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::luffy()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::luffy && IsChanged == false)
		{
			BYTE pattern[] = { 0xA9 ,0x99 ,0xF4 ,0xF3 ,0xF6 ,0x0D ,0x40 ,0xF3 ,0xAB ,0x89 ,0xF4 ,0xF3 ,0xE5 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0xF6 ,0x0D ,0x40 ,0xF3 ,0xAB ,0x89 ,0xF4 ,0xF3 ,0xE5 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::luffy && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0xF6 ,0x0D ,0x40 ,0xF3 ,0xAB ,0x89 ,0xF4 ,0xF3 ,0xE5 };
			BYTE pattern[] = { 0xA9 ,0x99 ,0xF4 ,0xF3 ,0xF6 ,0x0D ,0x40 ,0xF3 ,0xAB ,0x89 ,0xF4 ,0xF3 ,0xE5 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::luffy)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::wallshot()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::wallshot && IsChanged == false)
		{
			BYTE pattern[] = { 0xC7 ,0x4A ,0xF4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0xE6 ,0x5A ,0xF4 ,0xEE  ,0x64 ,0x5A ,0xB0 ,0xDE ,0x47 ,0x5A ,0xB0 ,0xCE };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0xE6 ,0x5A ,0xF4 ,0xEE  ,0x64 ,0x5A ,0xB0 ,0xDE ,0x47 ,0x5A ,0xB0 ,0xCE };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::wallshot && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0xE6 ,0x5A ,0xF4 ,0xEE  ,0x64 ,0x5A ,0xB0 ,0xDE ,0x47 ,0x5A ,0xB0 ,0xCE };
			BYTE pattern[] = { 0xC7 ,0x4A ,0xF4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0xE6 ,0x5A ,0xF4 ,0xEE  ,0x64 ,0x5A ,0xB0 ,0xDE ,0x47 ,0x5A ,0xB0 ,0xCE };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::wallshot)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::canyonfog()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::canyonfog && IsChanged == false)
		{
			BYTE pattern[] = { 0x00 ,0x00 ,0x94 ,0xE7 ,0x30 ,0x00 ,0x8D ,0xE5 ,0xC4 ,0x0E ,0x01 ,0xE3  ,0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x30 ,0x00 ,0x8D ,0xE5 ,0xC4 ,0x0E ,0x01 ,0xE3  ,0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::canyonfog && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x30 ,0x00 ,0x8D ,0xE5 ,0xC4 ,0x0E ,0x01 ,0xE3  ,0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 };
			BYTE pattern[] = { 0x00 ,0x00 ,0x94 ,0xE7 ,0x30 ,0x00 ,0x8D ,0xE5 ,0xC4 ,0x0E ,0x01 ,0xE3  ,0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::canyonfog)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::pruplefog()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::pruplefog && IsChanged == false)
		{
			BYTE pattern[] = { 0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xC8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x38 ,0x00 ,0x8D ,0xE5 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xC8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x38 ,0x00 ,0x8D ,0xE5 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::pruplefog && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xC8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x38 ,0x00 ,0x8D ,0xE5 };
			BYTE pattern[] = { 0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xC8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x38 ,0x00 ,0x8D ,0xE5 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::pruplefog)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::nograss()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::nograss && IsChanged == false)
		{
			BYTE pattern[] = { 0x00 ,0x00 ,0x53 ,0xE3 ,0x2E ,0x00 ,0x00 ,0x0A ,0x3A ,0x1A ,0xDF ,0xED ,0x5F ,0x46 ,0xC3 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x2E ,0x00 ,0x00 ,0x0A ,0x3A ,0x1A ,0xDF ,0xED ,0x5F ,0x46 ,0xC3 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::nograss && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x2E ,0x00 ,0x00 ,0x0A ,0x3A ,0x1A ,0xDF ,0xED ,0x5F ,0x46 ,0xC3 };
			BYTE pattern[] = { 0x00 ,0x00 ,0x53 ,0xE3 ,0x2E ,0x00 ,0x00 ,0x0A ,0x3A ,0x1A ,0xDF ,0xED ,0x5F ,0x46 ,0xC3 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::nograss)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::recoil2()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::recoil2 && IsChanged == false)
		{
			BYTE pattern[] = { 0x50 ,0x0A ,0x84 ,0xED ,0x2C ,0x00 ,0x96 ,0xE5 ,0x00 ,0x00 ,0x50 ,0xE3 ,0x31 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x2C ,0x00 ,0x96 ,0xE5 ,0x00 ,0x00 ,0x50 ,0xE3 ,0x31 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::recoil2 && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x2C ,0x00 ,0x96 ,0xE5 ,0x00 ,0x00 ,0x50 ,0xE3 ,0x31 };
			BYTE pattern[] = { 0x50 ,0x0A ,0x84 ,0xED ,0x2C ,0x00 ,0x96 ,0xE5 ,0x00 ,0x00 ,0x50 ,0xE3 ,0x31 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::recoil2)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::wallloot()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::wallloot && IsChanged == false)
		{
			BYTE pattern[] = { 0x91 ,0x00 ,0x00 ,0x4A ,0x08 ,0x30 ,0x9B ,0xE5 ,0x04 ,0x30 ,0x93 ,0xE5 ,0x0C ,0x80 ,0x88 ,0xE2 ,0x06 ,0x90 ,0x89 ,0xE2  ,0x03 ,0x00 ,0x57 ,0xE1 ,0xC0 ,0x00 ,0x00 ,0x0A };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x08 ,0x30 ,0x9B ,0xE5 ,0x04 ,0x30 ,0x93 ,0xE5 ,0x0C ,0x80 ,0x88 ,0xE2 ,0x06 ,0x90 ,0x89 ,0xE2  ,0x03 ,0x00 ,0x57 ,0xE1 ,0xC0 ,0x00 ,0x00 ,0x0A };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::wallloot && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x08 ,0x30 ,0x9B ,0xE5 ,0x04 ,0x30 ,0x93 ,0xE5 ,0x0C ,0x80 ,0x88 ,0xE2 ,0x06 ,0x90 ,0x89 ,0xE2  ,0x03 ,0x00 ,0x57 ,0xE1 ,0xC0 ,0x00 ,0x00 ,0x0A };
			BYTE pattern[] = { 0x91 ,0x00 ,0x00 ,0x4A ,0x08 ,0x30 ,0x9B ,0xE5 ,0x04 ,0x30 ,0x93 ,0xE5 ,0x0C ,0x80 ,0x88 ,0xE2 ,0x06 ,0x90 ,0x89 ,0xE2  ,0x03 ,0x00 ,0x57 ,0xE1 ,0xC0 ,0x00 ,0x00 ,0x0A };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::wallloot)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::fastrunv1()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::fastrunv1)
		{
			Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::CharacterOverrideAttrs, Setting::fastrv);
		}
		else
		{
			float writee = 1.0f;
			Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::CharacterOverrideAttrs, writee);
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}
void Memory::blackbody()
{


	while (true)
	{
		Sleep(15);
		if (Setting::blackbody && IsChanged == false)
		{
			BYTE pattern[] = { 0x17 ,0xB7 ,0xD1 ,0x38 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x4C ,0x2D ,0xE9 ,0x10 ,0xB0 ,0x8D ,0xE2 };
			BYTE patter2[] = { 0x00 ,0x00 ,0xE0 ,0x40 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x4C ,0x2D ,0xE9 ,0x10 ,0xB0 ,0x8D ,0xE2 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::blackbody && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0xE0 ,0x40 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x4C ,0x2D ,0xE9 ,0x10 ,0xB0 ,0x8D ,0xE2 };
			BYTE pattern[] = { 0x17 ,0xB7 ,0xD1 ,0x38 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x4C ,0x2D ,0xE9 ,0x10 ,0xB0 ,0x8D ,0xE2 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::blackbody)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::nofog()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::nofog && IsChanged == false)
		{
			BYTE pattern[] = { 0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xA8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xA8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
		//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::nofog && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xA8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 };
			BYTE pattern[] = { 0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 ,0x8D ,0xE5 ,0xA8 ,0x0E ,0x01 ,0xE3 ,0x00 ,0x00 ,0x94 ,0xE7 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::nofog)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::blacksky()
{
	bool IsChanged = false;

	while (true)
	{
		Sleep(15);
		if (Setting::blacksky && IsChanged == false)
		{
			BYTE pattern[] = { 0x5A ,0x00 ,0x00 ,0xEA ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 };
			BYTE patter2[] = { 0x5A ,0x00 ,0x00 ,0xEA ,0xAD ,0xC5 ,0x27 ,0xB7 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 };

			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
		//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::blacksky && IsChanged == true)
		{
			BYTE patter2[] = { 0x5A ,0x00 ,0x00 ,0xEA ,0xAD ,0xC5 ,0x27 ,0xB7 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 };
			BYTE pattern[] = { 0x5A ,0x00 ,0x00 ,0xEA ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 ,0x00 ,0xF0 ,0x20 ,0xE3 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::blacksky)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::speeddown()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::speeddown && IsChanged == false)
		{
			BYTE pattern[] = { 0x00 ,0x0A ,0x81 ,0xEE ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::speeddown && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE };
			BYTE pattern[] = { 0x00 ,0x0A ,0x81 ,0xEE ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::speeddown)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::nosmoke()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::nosmoke && IsChanged == false)
		{
			BYTE pattern[] = { 0xC0 ,0x1A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x1E ,0xFF ,0x2F ,0x41 ,0xE4 ,0x10 ,0x91 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x1E ,0xFF ,0x2F ,0x41 ,0xE4 ,0x10 ,0x91 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::nosmoke && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x1E ,0xFF ,0x2F ,0x41 ,0xE4 ,0x10 ,0x91 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern[] = { 0xC0 ,0x1A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x1E ,0xFF ,0x2F ,0x41 ,0xE4 ,0x10 ,0x91 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::nosmoke)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::MagicX()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::MagicX && IsChanged == false)
		{
			BYTE pattern[] = { 0x05 ,0x0A ,0x28 ,0xEE ,0x18 ,0x70 ,0x8D ,0xE5 ,0x14 ,0x50 ,0x8D ,0xE5 ,0x10 ,0x50 ,0x8D ,0xE5 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x70 ,0x8D ,0xE5 ,0x14 ,0x50 ,0x8D ,0xE5 ,0x10 ,0x50 ,0x8D ,0xE5 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::MagicX && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x70 ,0x8D ,0xE5 ,0x14 ,0x50 ,0x8D ,0xE5 ,0x10 ,0x50 ,0x8D ,0xE5 };
			BYTE pattern[] = { 0x05 ,0x0A ,0x28 ,0xEE ,0x18 ,0x70 ,0x8D ,0xE5 ,0x14 ,0x50 ,0x8D ,0xE5 ,0x10 ,0x50 ,0x8D ,0xE5 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::MagicX)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::pronespeed()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::pronespeed && IsChanged == false)
		{
			BYTE pattern[] = { 0x00 ,0x0A ,0x81 ,0xEE ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE ,0x02 ,0x1A ,0x21 ,0xEE ,0x02 ,0x2A ,0x23 ,0xEE ,0x35 ,0x2A ,0x84 ,0xED ,0x00 ,0x1A ,0x87 ,0xED };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE ,0x02 ,0x1A ,0x21 ,0xEE ,0x02 ,0x2A ,0x23 ,0xEE ,0x35 ,0x2A ,0x84 ,0xED ,0x00 ,0x1A ,0x87 ,0xED };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
		//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::pronespeed && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE ,0x02 ,0x1A ,0x21 ,0xEE ,0x02 ,0x2A ,0x23 ,0xEE ,0x35 ,0x2A ,0x84 ,0xED ,0x00 ,0x1A ,0x87 ,0xED };
			BYTE pattern[] = { 0x00 ,0x0A ,0x81 ,0xEE ,0x00 ,0x2A ,0x2B ,0xEE ,0x00 ,0x0A ,0x96 ,0xED ,0x00 ,0x1A ,0x97 ,0xED ,0x00 ,0x0A ,0x22 ,0xEE ,0x02 ,0x1A ,0x21 ,0xEE ,0x02 ,0x2A ,0x23 ,0xEE ,0x35 ,0x2A ,0x84 ,0xED ,0x00 ,0x1A ,0x87 ,0xED };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::pronespeed)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::knockspeed()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::knockspeed && IsChanged == false)
		{
			BYTE pattern[] = { 0xC3 ,0x0A ,0xB1 ,0xEE ,0xC0 ,0x0A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x02 ,0x00 ,0x00 ,0x7A ,0x10 ,0x0A ,0x13 ,0xEE ,0x2A ,0x40 ,0xE4 ,0xEB ,0x10 ,0x0A ,0x00 ,0xEE ,0x00 ,0x1A ,0xB7 ,0xEE ,0x35 ,0x3A ,0x94 ,0xED };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0x0A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x02 ,0x00 ,0x00 ,0x7A ,0x10 ,0x0A ,0x13 ,0xEE ,0x2A ,0x40 ,0xE4 ,0xEB ,0x10 ,0x0A ,0x00 ,0xEE ,0x00 ,0x1A ,0xB7 ,0xEE ,0x35 ,0x3A ,0x94 ,0xED };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::knockspeed && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0x0A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x02 ,0x00 ,0x00 ,0x7A ,0x10 ,0x0A ,0x13 ,0xEE ,0x2A ,0x40 ,0xE4 ,0xEB ,0x10 ,0x0A ,0x00 ,0xEE ,0x00 ,0x1A ,0xB7 ,0xEE ,0x35 ,0x3A ,0x94 ,0xED };
			BYTE pattern[] = { 0xC3 ,0x0A ,0xB1 ,0xEE ,0xC0 ,0x0A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x02 ,0x00 ,0x00 ,0x7A ,0x10 ,0x0A ,0x13 ,0xEE ,0x2A ,0x40 ,0xE4 ,0xEB ,0x10 ,0x0A ,0x00 ,0xEE ,0x00 ,0x1A ,0xB7 ,0xEE ,0x35 ,0x3A ,0x94 ,0xED };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::knockspeed)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::yellowcontroller()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::yellowcontroller && IsChanged == false)
		{
			BYTE pattern[] = { 0x10 ,0x1A ,0x12 ,0xEE ,0x71 ,0x10 ,0xEF ,0xE6 ,0x01 ,0x00 ,0x80 ,0xE1 ,0x0E ,0x8B ,0xBD ,0xEC ,0x30 ,0x88 ,0xBD ,0xE8 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x71 ,0x10 ,0xEF ,0xE6 ,0x01 ,0x00 ,0x80 ,0xE1 ,0x0E ,0x8B ,0xBD ,0xEC ,0x30 ,0x88 ,0xBD ,0xE8 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::yellowcontroller && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x71 ,0x10 ,0xEF ,0xE6 ,0x01 ,0x00 ,0x80 ,0xE1 ,0x0E ,0x8B ,0xBD ,0xEC ,0x30 ,0x88 ,0xBD ,0xE8 };
			BYTE pattern[] = { 0x10 ,0x1A ,0x12 ,0xEE ,0x71 ,0x10 ,0xEF ,0xE6 ,0x01 ,0x00 ,0x80 ,0xE1 ,0x0E ,0x8B ,0xBD ,0xEC ,0x30 ,0x88 ,0xBD ,0xE8 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::yellowcontroller)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::flyman()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::flyman && IsChanged == false)
		{
			BYTE pattern[] = { 0x8C ,0x37 ,0x04 ,0x06 ,0x74 ,0x37 ,0x04 ,0x06 ,0x54 ,0x37 ,0x04 ,0x06 ,0x46 ,0x86 ,0x4E ,0x05 ,0x14 ,0x36 ,0x04 ,0x06 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x74 ,0x37 ,0x04 ,0x06 ,0x54 ,0x37 ,0x04 ,0x06 ,0x46 ,0x86 ,0x4E ,0x05 ,0x14 ,0x36 ,0x04 ,0x06 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::flyman && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x74 ,0x37 ,0x04 ,0x06 ,0x54 ,0x37 ,0x04 ,0x06 ,0x46 ,0x86 ,0x4E ,0x05 ,0x14 ,0x36 ,0x04 ,0x06 };
			BYTE pattern[] = { 0x8C ,0x37 ,0x04 ,0x06 ,0x74 ,0x37 ,0x04 ,0x06 ,0x54 ,0x37 ,0x04 ,0x06 ,0x46 ,0x86 ,0x4E ,0x05 ,0x14 ,0x36 ,0x04 ,0x06 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::flyman)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::ipad()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::ipad && IsChanged == false)
		{
			BYTE pattern[] = { 0x00 ,0x00 ,0xB4 ,0x43 ,0x5C ,0x5C ,0x93 ,0x03 ,0x80 ,0xFA ,0x75 ,0x03 ,0x30 ,0x48 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x82 ,0x43 ,0x5C ,0x5C ,0x93 ,0x03 ,0x80 ,0xFA ,0x75 ,0x03 ,0x30 ,0x48 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::ipad && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x82 ,0x43 ,0x5C ,0x5C ,0x93 ,0x03 ,0x80 ,0xFA ,0x75 ,0x03 ,0x30 ,0x48 };
			BYTE pattern[] = { 0x00 ,0x00 ,0xB4 ,0x43 ,0x5C ,0x5C ,0x93 ,0x03 ,0x80 ,0xFA ,0x75 ,0x03 ,0x30 ,0x48 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::ipad)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::noheadshot()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::noheadshot && IsChanged == false)
		{
			BYTE pattern[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x20 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::noheadshot && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x20 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			BYTE pattern[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::noheadshot)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::nightmode()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::nightmode && IsChanged == false)
		{
			BYTE pattern[] = { 0x42 ,0x2A ,0xB1 ,0xEE ,0x58 ,0x0A ,0x8D ,0xED ,0x59 ,0x1A ,0x8D ,0xED ,0x5A };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x58 ,0x0A ,0x8D ,0xED ,0x59 ,0x1A ,0x8D ,0xED ,0x5A };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::nightmode && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x58 ,0x0A ,0x8D ,0xED ,0x59 ,0x1A ,0x8D ,0xED ,0x5A };
			BYTE pattern[] = { 0x42 ,0x2A ,0xB1 ,0xEE ,0x58 ,0x0A ,0x8D ,0xED ,0x59 ,0x1A ,0x8D ,0xED ,0x5A };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::nightmode)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::crossairv2()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::crossairv2 && IsChanged == false)
		{
			BYTE pattern[] = { 0x00 ,0x0A ,0x90 ,0x1D ,0x10 ,0x0A ,0x10 ,0xEE ,0x1E ,0xFF ,0x2F ,0xE1 ,0x70 ,0x1B ,0x90 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			BYTE patter2[] = { 0x01 ,0x00 ,0x00 ,0x00 ,0x10 ,0x0A ,0x10 ,0xEE ,0x1E ,0xFF ,0x2F ,0xE1 ,0x70 ,0x1B ,0x90 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::crossairv2 && IsChanged == true)
		{
			BYTE patter2[] = { 0x01 ,0x00 ,0x00 ,0x00 ,0x10 ,0x0A ,0x10 ,0xEE ,0x1E ,0xFF ,0x2F ,0xE1 ,0x70 ,0x1B ,0x90 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern[] = { 0x00 ,0x0A ,0x90 ,0x1D ,0x10 ,0x0A ,0x10 ,0xEE ,0x1E ,0xFF ,0x2F ,0xE1 ,0x70 ,0x1B ,0x90 ,0xE5 ,0x00 ,0x00 ,0xA0 ,0xE3 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::crossairv2)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::instantv2()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::instantv2 && IsChanged == false)
		{
			BYTE pattern[] = { 0x4E ,0x8A ,0x38 ,0xEE ,0xE0 ,0x00 ,0xDD ,0xE5 ,0x01 ,0x00 ,0x10 ,0xE3 ,0x23 ,0x00 ,0x00 ,0x1A ,0x00 ,0x91 ,0x84 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0xE0 ,0x00 ,0xDD ,0xE5 ,0x01 ,0x00 ,0x10 ,0xE3 ,0x23 ,0x00 ,0x00 ,0x1A ,0x00 ,0x91 ,0x84 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::instantv2 && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0xE0 ,0x00 ,0xDD ,0xE5 ,0x01 ,0x00 ,0x10 ,0xE3 ,0x23 ,0x00 ,0x00 ,0x1A ,0x00 ,0x91 ,0x84 };
			BYTE pattern[] = { 0x4E ,0x8A ,0x38 ,0xEE ,0xE0 ,0x00 ,0xDD ,0xE5 ,0x01 ,0x00 ,0x10 ,0xE3 ,0x23 ,0x00 ,0x00 ,0x1A ,0x00 ,0x91 ,0x84 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::instantv2)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::notree()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::notree && IsChanged == false)
		{
			BYTE pattern[] = { 0x10 ,0xFA ,0xF1 ,0xEE ,0x26 ,0x00 ,0x00 ,0xDA ,0xC6 ,0x0A ,0xB1 ,0xEE ,0x0D ,0x1A ,0x96 ,0xED };
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x26 ,0x00 ,0x00 ,0xDA ,0xC6 ,0x0A ,0xB1 ,0xEE ,0x0D ,0x1A ,0x96 ,0xED };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//	Memory::FindPattern(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::notree && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x26 ,0x00 ,0x00 ,0xDA ,0xC6 ,0x0A ,0xB1 ,0xEE ,0x0D ,0x1A ,0x96 ,0xED };
			BYTE pattern[] = { 0x10 ,0xFA ,0xF1 ,0xEE ,0x26 ,0x00 ,0x00 ,0xDA ,0xC6 ,0x0A ,0xB1 ,0xEE ,0x0D ,0x1A ,0x96 ,0xED };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::notree)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::flashof()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::flashof && IsChanged == false)
		{
			BYTE pattern[] = { 0x22 ,0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE patter2[] = { '?', '?', 0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE pattern3[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern4[] = { 0xC4 ,0x00 ,0xCD ,0xE5 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern5[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern6[] = { 0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern7[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern8[] = { 0x10 ,0x0A ,0x10 ,0xEE ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern9[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern10[] = { 0xC0 ,0x1A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern11[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x45 ,0x3A };
			BYTE pattern12[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x40 ,0x2A ,0xB0 ,0x4E ,0x10 ,0xFA ,0xF1 ,0xEE ,0x41 ,0x2A ,0xB0 ,0x4E ,0x10 ,0x0A ,0x12 ,0xEE };
			BYTE pattern13[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern14[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern15[] = { 0x17 ,0x0A ,0x97 ,0xED ,0x00 ,0x00 ,0x00 ,0xEA };
			BYTE pattern16[] = { 0x00 ,0x00 ,0x00 ,0x00 };

			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern3, sizeof(pattern3), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern5, sizeof(pattern5), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern7, sizeof(pattern7), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern9, sizeof(pattern9), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern11, sizeof(pattern11), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern13, sizeof(pattern13), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern15, sizeof(pattern15), 0x10000000, 0x90000000, false, 0, foundedBases2);


			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern4, sizeof(pattern4), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern6, sizeof(pattern6), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern8, sizeof(pattern8), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern10, sizeof(pattern10), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern12, sizeof(pattern12), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern14, sizeof(pattern14), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern16, sizeof(pattern16), nullptr);

				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::flashof && IsChanged == true)
		{
			BYTE pattern[] = { 0x22 ,0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE patter2[] = { '?', '?', 0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE pattern3[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern4[] = { 0xC4 ,0x00 ,0xCD ,0xE5 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern5[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern6[] = { 0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern7[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern8[] = { 0x10 ,0x0A ,0x10 ,0xEE ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern9[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern10[] = { 0xC0 ,0x1A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern11[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x45 ,0x3A };
			BYTE pattern12[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x40 ,0x2A ,0xB0 ,0x4E ,0x10 ,0xFA ,0xF1 ,0xEE ,0x41 ,0x2A ,0xB0 ,0x4E ,0x10 ,0x0A ,0x12 ,0xEE };
			BYTE pattern13[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern14[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern15[] = { 0x17 ,0x0A ,0x97 ,0xED ,0x00 ,0x00 ,0x00 ,0xEA };
			BYTE pattern16[] = { 0x00 ,0x00 ,0x00 ,0x00 };


			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);

			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern4, sizeof(pattern4), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern6, sizeof(pattern6), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern8, sizeof(pattern8), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern10, sizeof(pattern10), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern12, sizeof(pattern12), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern14, sizeof(pattern14), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern16, sizeof(pattern16), 0x10000000, 0x90000000, false, 0, foundedBases);

			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern3, sizeof(pattern3), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern5, sizeof(pattern5), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern7, sizeof(pattern7), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern9, sizeof(pattern9), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern11, sizeof(pattern11), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern13, sizeof(pattern13), nullptr);



				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::flashof)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}
}
void Memory::flashon()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::flashon && IsChanged == false)
		{
			BYTE pattern[] = { 0x80 ,0x84 ,0x2E ,0x41 ,0x2D ,0x43 ,0x1C ,0xEB ,0xE2 ,0x36 ,0x1A ,0xBF ,0x18 ,0x00 ,0x8D ,0xE2 };
			BYTE patter2[] = { 0x23 ,0x32 ,0x18 ,0x41 ,0x2D ,0x43 ,0x1C ,0xEB ,0xE2 ,0x36 ,0x1A ,0xBF ,0x18 ,0x00 ,0x8D ,0xE2 };
			BYTE pattern3[] = { 0x00 ,0x00 ,0xB0 ,0x42 ,0x00 ,0x00 ,0x70 ,0x42 };
			BYTE pattern4[] = { 0x00 ,0x00 ,0x9A ,0x42 ,0x00 ,0x00 ,0x48 ,0x42 };
			BYTE pattern5[] = { 0x00 ,0x00 ,0x70 ,0x42 ,0x00 ,0x00 ,0x48 ,0x42 };
			BYTE pattern6[] = { 0x00 ,0x00 ,0x7C ,0xC2 ,0x00 ,0x00 ,0x48 ,0x42 };
			BYTE pattern7[] = { 0xA5 ,0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE pattern8[] = { 0xE2 ,0x7F ,0x89 ,0x12 ,0x11 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };


			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern3, sizeof(pattern3), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern5, sizeof(pattern5), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern7, sizeof(pattern7), 0x10000000, 0x90000000, false, 0, foundedBases2);



			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern4, sizeof(pattern4), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern6, sizeof(pattern6), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern8, sizeof(pattern8), nullptr);


				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::flashon && IsChanged == true)
		{
			BYTE pattern[] = { 0x23 ,0x32 ,0x18 ,0x41 ,0x2D ,0x43 ,0x1C ,0xEB ,0xE2 ,0x36 ,0x1A ,0xBF ,0x18 ,0x00 ,0x8D ,0xE2 };
			BYTE patter2[] = { 0x80 ,0x84 ,0x2E ,0x41 ,0x2D ,0x43 ,0x1C ,0xEB ,0xE2 ,0x36 ,0x1A ,0xBF ,0x18 ,0x00 ,0x8D ,0xE2 };
			BYTE pattern3[] = { 0x00 ,0x00 ,0x9A ,0x42 ,0x00 ,0x00 ,0x48 ,0x42 };
			BYTE pattern4[] = { 0x00 ,0x00 ,0xB0 ,0x42 ,0x00 ,0x00 ,0x70 ,0x42 };
			BYTE pattern5[] = { 0x00 ,0x00 ,0x7C ,0xC2 ,0x00 ,0x00 ,0x48 ,0x42 };
			BYTE pattern6[] = { 0x00 ,0x00 ,0x70 ,0x42 ,0x00 ,0x00 ,0x48 ,0x42 };
			BYTE pattern7[] = { 0xA5 ,0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE pattern8[] = { 0xE2 ,0x7F ,0x89 ,0x12 ,0x11 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };



			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);

			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern4, sizeof(pattern4), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern6, sizeof(pattern6), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern8, sizeof(pattern8), 0x10000000, 0x90000000, false, 0, foundedBases);


			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern3, sizeof(pattern3), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern5, sizeof(pattern5), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern7, sizeof(pattern7), nullptr);




				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::flashon)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}
}
void Memory::fixflash()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::fixflash && IsChanged == false)
		{
			BYTE pattern[] = { '?', '?', 0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE patter2[] = { 0x22 ,0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE pattern3[] = { 0xC4 ,0x00 ,0xCD ,0xE5 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern4[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern5[] = { 0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern6[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern7[] = { 0x10 ,0x0A ,0x10 ,0xEE ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern8[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern9[] = { 0xC0 ,0x1A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern10[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern11[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x40 ,0x2A ,0xB0 ,0x4E ,0x10 ,0xFA ,0xF1 ,0xEE ,0x41 ,0x2A ,0xB0 ,0x4E ,0x10 ,0x0A ,0x12 ,0xEE };
			BYTE pattern12[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x45 ,0x3A };
			BYTE pattern13[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern14[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern15[] = { 0x00 ,0x00 ,0x00 ,0x00 };
			BYTE pattern16[] = { 0x17 ,0x0A ,0x97 ,0xED ,0x00 ,0x00 ,0x00 ,0xEA };


			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern3, sizeof(pattern3), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern5, sizeof(pattern5), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern7, sizeof(pattern7), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern9, sizeof(pattern9), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern11, sizeof(pattern11), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern13, sizeof(pattern13), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern15, sizeof(pattern15), 0x10000000, 0x90000000, false, 0, foundedBases2);



			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern4, sizeof(pattern4), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern6, sizeof(pattern6), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern8, sizeof(pattern8), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern10, sizeof(pattern10), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern12, sizeof(pattern12), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern14, sizeof(pattern14), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern16, sizeof(pattern16), nullptr);

				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::fixflash && IsChanged == true)
		{
			BYTE pattern[] = { 0x22 ,0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE patter2[] = { '?', '?', 0x0A ,0x9F ,0xED ,0x10 ,0x0A ,0x01 ,0xEE ,0x00 ,0x8A };
			BYTE pattern3[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern4[] = { 0xC4 ,0x00 ,0xCD ,0xE5 ,0x38 ,0x00 ,0x96 ,0xE5 ,0x70 ,0x20 };
			BYTE pattern5[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern6[] = { 0x41 ,0x0A ,0x30 ,0xEE ,0x00 ,0x00 ,0x94 ,0xE7 ,0x34 ,0x00 };
			BYTE pattern7[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern8[] = { 0x10 ,0x0A ,0x10 ,0xEE ,0x02 ,0x8B ,0xBD ,0xEC ,0x10 ,0x8C ,0xBD ,0xE8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD0 ,0x2E ,0xC1 ,0xE1 };
			BYTE pattern9[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern10[] = { 0xC0 ,0x1A ,0xB4 ,0xEE ,0x10 ,0xFA ,0xF1 ,0xEE ,0x8C ,0x00 ,0x00 ,0xAA ,0x91 ,0x8A ,0x9F ,0xED ,0x01 ,0x00 ,0xA0 ,0xE3 };
			BYTE pattern11[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0xFA ,0xF1 ,0xEE ,0x45 ,0x3A };
			BYTE pattern12[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x40 ,0x2A ,0xB0 ,0x4E ,0x10 ,0xFA ,0xF1 ,0xEE ,0x41 ,0x2A ,0xB0 ,0x4E ,0x10 ,0x0A ,0x12 ,0xEE };
			BYTE pattern13[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern14[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xC0 ,0xF3 };
			BYTE pattern15[] = { 0x17 ,0x0A ,0x97 ,0xED ,0x00 ,0x00 ,0x00 ,0xEA };
			BYTE pattern16[] = { 0x00 ,0x00 ,0x00 ,0x00 };



			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);

			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern4, sizeof(pattern4), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern6, sizeof(pattern6), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern8, sizeof(pattern8), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern10, sizeof(pattern10), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern12, sizeof(pattern12), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern14, sizeof(pattern14), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::MemSearch(pattern16, sizeof(pattern16), 0x10000000, 0x90000000, false, 0, foundedBases);

			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern3, sizeof(pattern3), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern5, sizeof(pattern5), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern7, sizeof(pattern7), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern9, sizeof(pattern9), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern11, sizeof(pattern11), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern13, sizeof(pattern13), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern15, sizeof(pattern15), nullptr);



				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::fixflash)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}
}
void Memory::Magnetbullet()
{

	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::Magnetbullet && IsChanged == false)
		{
			BYTE pattern[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0xF4 ,0x41 };
			BYTE patter2[] = { 0xFA ,0xC2 ,0x00 ,0x00 ,0x7A ,0x43 ,0x00 ,0x00 ,0x7A ,0x43 };
			BYTE pattern3[] = { 0x00 ,0x00 ,0xB4 ,0x43 ,0x78 ,0x17 ,0x9C ,0x03 ,0x84 ,0xAE ,0x7E ,0x03 ,0x30 ,0x48 };
			BYTE pattern4[] = { 0x00 ,0x00 ,0x82 ,0x43 ,0x78 ,0x17 ,0x9C ,0x03 ,0x84 ,0xAE ,0x7E ,0x03 ,0x30 ,0x48 };
			BYTE pattern5[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0xF4 ,0x41 };
			BYTE pattern6[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0x7A ,0x43 ,0x00 ,0x00 ,0x7A ,0x43 };
			BYTE pattern7[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0xF4 ,0x41 };
			BYTE pattern8[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0x2F ,0x44 ,0x00 ,0x00 ,0x2F ,0x44 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern3, sizeof(pattern3), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern5, sizeof(pattern5), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			Utility::MemSearch(pattern7, sizeof(pattern7), 0x10000000, 0x90000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern4, sizeof(pattern4), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern6, sizeof(pattern6), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], pattern8, sizeof(pattern8), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::Magnetbullet && IsChanged == true)
		{
			BYTE pattern[] = { 0xFA ,0xC2 ,0x00 ,0x00 ,0x7A ,0x43 ,0x00 ,0x00 ,0x7A ,0x43 };
			BYTE patter2[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0xF4 ,0x41 };
			BYTE pattern3[] = { 0x00 ,0x00 ,0x82 ,0x43 ,0x78 ,0x17 ,0x9C ,0x03 ,0x84 ,0xAE ,0x7E ,0x03 ,0x30 ,0x48 };
			BYTE pattern4[] = { 0x00 ,0x00 ,0xB4 ,0x43 ,0x78 ,0x17 ,0x9C ,0x03 ,0x84 ,0xAE ,0x7E ,0x03 ,0x30 ,0x48 };
			BYTE pattern5[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0x7A ,0x43 ,0x00 ,0x00 ,0x7A ,0x43 };
			BYTE pattern6[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0xF4 ,0x41 };
			BYTE pattern7[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0x2F ,0x44 ,0x00 ,0x00 ,0x2F ,0x44 };
			BYTE pattern8[] = { 0xB8 ,0x41 ,0x00 ,0x00 ,0xC8 ,0x41 ,0x00 ,0x00 ,0xF4 ,0x41 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);

			//Utility::MemSearch(pattern4, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			Utility::MemSearch(pattern4, sizeof(pattern6), 0x10000000, 0xF0000000, false, 0, foundedBases);
			Utility::MemSearch(pattern4, sizeof(pattern8), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern3), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern5), nullptr);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern7), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::Magnetbullet)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}

}
void Memory::zeroheadshot()
{
	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::zeroheadshot && IsChanged == false)
		{
			BYTE pattern[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			BYTE patter2[] = { 0x00 ,0x00 ,0x20 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::zeroheadshot && IsChanged == true)
		{
			BYTE patter2[] = { 0x00 ,0x00 ,0x20 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			BYTE pattern[] = { 0xCD ,0xCC ,0xCC ,0x3D ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0xF2 ,0x7E ,0x03 ,0xCC ,0xF2 ,0x7E ,0x03 ,0xC0 ,0xF2 ,0x7E ,0x03 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
			}
			IsChanged = false;
		}
		if (Setting::zeroheadshot)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}
}
void Memory::MODSKIN()
{
	bool IsChanged = false;
	while (true)
	{
		Sleep(15);
		if (Setting::RAVENXSUITSet && IsChanged == false)
		{
			BYTE pattern[] = { 0x41, 0x5D, 0x15 };
			BYTE patter2[] = { 0xAE, 0x73, 0x15 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::RAVENXSUITSet && IsChanged == true)
		{
			BYTE patter2[] = { 0xAE, 0x73, 0x15 };
			BYTE pattern[] = { 0x41, 0x5D, 0x15 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::RAVENXSUITSet)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		//--------
		if (Setting::PharoSUITSet && IsChanged == false)
		{
			BYTE pattern[] = { 0x41, 0x5D, 0x15 };
			BYTE patter2[] = { 0xBC, 0x72, 0x15 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::PharoSUITSet && IsChanged == true)
		{
			BYTE patter2[] = { 0xBC, 0x72, 0x15 };
			BYTE pattern[] = { 0x41, 0x5D, 0x15 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::PharoSUITSet)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		//--------
		if (Setting::M416Joker && IsChanged == false)
		{
			BYTE pattern[] = { 0xB0, 0x1E, 0x9A, 0x00 };
			BYTE patter2[] = { 0x1E, 0xFD, 0x9F, 0x41 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::M416Joker && IsChanged == true)
		{
			BYTE patter2[] = { 0x1E, 0xFD, 0x9F, 0x41 };
			BYTE pattern[] = { 0xB0, 0x1E, 0x9A, 0x00 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::M416Joker)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
		//--------
		if (Setting::M416Glacier && IsChanged == false)
		{
			BYTE pattern[] = { 0xB0, 0x1E, 0x9A, 0x00 };
			BYTE patter2[] = { 0x36, 0xFD, 0x9F, 0x41 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			//Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(pattern, sizeof(pattern), 0x10000000, 0xF0000000, false, 0, foundedBases2);

			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::M416Glacier && IsChanged == true)
		{
			BYTE patter2[] = { 0x36, 0xFD, 0x9F, 0x41 };
			BYTE pattern[] = { 0xB0, 0x1E, 0x9A, 0x00 };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();

			//    Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
			//Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			//	Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			Utility::FindPattern(patter2, sizeof(patter2), 0x10000000, 0xF0000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::M416Glacier)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}
}
//--------}
void Memory::Instant()
{
	while (true)
	{

		if (Setting::fastrun)
		{

			if (GetAsyncKeyState(Setting::fastrunkey))
			{

				Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::CharacterOverrideAttrs, Setting::fastrv);
				//fastruncheck = false;
			}
			else
			{
				Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::CharacterOverrideAttrs, 1.0f);
				//	fastruncheck = true;
			}
		}

		if (Setting::instanthit)
		{
			float BulletFireSpeed = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::BulletFireSpeed);
			if (BulletFireSpeed != 17000)
			{
				Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::BulletFireSpeed, 17000);
			}
		}
		if (Setting::CameraCatch)
		{
			DWORD LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::LocalController);
			if (LocalController)
			{
				DWORD Controller1 = 0x31c;
				DWORD ControlRotation = 0x318;
				DWORD PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + Offset::PlayerCameraManager);
				if (PlayerCameraManager)
				{
					CameraCacheEntry CameraCache = Utility::ReadMemoryEx<CameraCacheEntry>(PlayerCameraManager + Offset::CameraCache);
					VECTOR3 HeadPosition = ClosestToCrosshair();
					VECTOR3 currentViewAngle = CameraCache.POV.Location;
					if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
					{
						FRotator AimAngles = ToRotator(currentViewAngle, HeadPosition);
						DWORD Control = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Controller1);
						Utility::WriteMemoryEx<FRotator>(Control + ControlRotation, AimAngles);
					}
				}
			}
		}
		if (Setting::fastparachute)
		{
			if (GetAsyncKeyState(VK_LSHIFT)) {
				DWORD characterparchute = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CharacterParachuteComponent);
				if (characterparchute != 0)
				{
					Utility::WriteMemoryEx<float>(characterparchute + Offset::CurrentFallSpeed, Setting::landa);
				}
			}
		}
		if (Setting::FastParachute)
		{
			if (GetAsyncKeyState(Setting::FastParachutekey))
			{
				DWORD characterparchute = Utility::ReadMemoryEx<int>(Data::LocalPlayer + Offset::CharacterParachuteComponent);
				if (characterparchute != 0)
				{
					float Replase = 10000.0f;
					Utility::WriteMemoryEx<float>(characterparchute + Offset::CurrentFallSpeed, Replase);
				}
			}
		}
		bool InCar = Utility::ReadMemoryEx<bool>(Data::LocalPlayer + Offset::bIsEngineStarted);
		if (Setting::speedcar)
		{
			if (GetAsyncKeyState(Setting::Fastcarkey))
			{
				if (InCar)
				{
					Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::ExtraBoostFactor, Setting::carsv);
				}
			}
		}
		if (Setting::speedcar) {
			if (GetAsyncKeyState(Setting::Backcarkey))
			{

				if (InCar)
				{
					Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::ExtraBoostFactor, Setting::carsv);
				}
			}
		}
		if (Setting::GodView)
		{
			bool godview = false;
			float GodViewtop = Setting::UP;
			float GodViewdown = Setting::DOWN;
			float GodViewFRONT = Setting::FRONT;
			float GodViewBACK = Setting::BACK;
			float GodViewleft = Setting::LEFT;
			float GodViewright = Setting::RIGHT;
			float GodViewdefult = -88.0f;
			DWORD View = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x12b4);
			DWORD self = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1160);
			DWORD root1 = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::RootComponent) + 0x164;
			DWORD root2 = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::RootComponent) + 0x1c4;
			DWORD root = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::RootComponent) + 0x158;
			if (GetAsyncKeyState(Setting::GodUp))
			{
				FLOAT ground;
				ReadProcessMemory(Game::hProcess, (LPCVOID)root, &ground, sizeof(ground), nullptr);
				while (true)
				{
					Utility::WriteMemoryEx<FLOAT>(root, ground + GodViewtop);
					if (!GetAsyncKeyState(Setting::GodUp))
					{
						break;
					}
				}
			}
			if (GetAsyncKeyState(Setting::GodDown))
			{
				FLOAT ground;
				ReadProcessMemory(Game::hProcess, (LPCVOID)root, &ground, sizeof(ground), nullptr);
				while (true)
				{
					Utility::WriteMemoryEx<FLOAT>(root, ground + GodViewdown);
					if (!GetAsyncKeyState(Setting::GodDown))
					{
						break;
					}
				}
			}
			if (GetAsyncKeyState(Setting::GodFRONT))
			{
				FLOAT ground;
				ReadProcessMemory(Game::hProcess, (LPCVOID)root1, &ground, sizeof(ground), nullptr);
				while (true)
				{
					Utility::WriteMemoryEx<FLOAT>(root1, ground + GodViewFRONT);
					if (!GetAsyncKeyState(Setting::GodFRONT))
					{
						break;
					}
				}
			}
			if (GetAsyncKeyState(Setting::GodBACK)) { //h key
				FLOAT ground;
				ReadProcessMemory(Game::hProcess, (LPCVOID)root1, &ground, sizeof(ground), nullptr);
				while (true)
				{
					Utility::WriteMemoryEx<FLOAT>(root1, ground + GodViewBACK);
					if (!GetAsyncKeyState(Setting::GodFRONT))
					{
						break;
					}
				}
			}
			if (GetAsyncKeyState(Setting::Godleft)) {//y key
				Utility::WriteMemoryEx<FLOAT>(View + 0x11C, -370);
				Utility::WriteMemoryEx<FLOAT>(self + 0x11C, -370);
				godview = true;
			}
			if (GetAsyncKeyState(Setting::Godright)) { //h key
				Utility::WriteMemoryEx<FLOAT>(View + 0x11C, -370);
				Utility::WriteMemoryEx<FLOAT>(self + 0x11C, -370);
				godview = true;
			}
			if (!GetAsyncKeyState(Setting::Godright) && !GetAsyncKeyState(Setting::Godleft) && !GetAsyncKeyState(Setting::GodFRONT) && !GetAsyncKeyState(Setting::GodBACK) && !GetAsyncKeyState(Setting::GodDown) && !GetAsyncKeyState(Setting::GodUp) && godview == true)
			{
				Utility::WriteMemoryEx<FLOAT>(View + 0x120, -88);
				Utility::WriteMemoryEx<FLOAT>(self + 0x120, -88);
				Utility::WriteMemoryEx<FLOAT>(View + 0x118, 0);
				Utility::WriteMemoryEx<FLOAT>(self + 0x118, 0);
				Utility::WriteMemoryEx<FLOAT>(View + 0x11C, 0);
				Utility::WriteMemoryEx<FLOAT>(self + 0x11C, 0);

				godview = false;
			}
		}
		if (Setting::recoil)
		{

			DWORD weaponOffSet = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
			if (weaponOffSet != 0)
			{
				DWORD shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + Offset::ShootWeaponEntity);
				float writee = 0.0f;
				if (shootOffset != 0)
				{
					Utility::WriteMemoryEx<float>(shootOffset + Offset::AccessoriesVRecoilFactor, writee);
					Utility::WriteMemoryEx<float>(shootOffset + Offset::AccessoriesHRecoilFactor, writee);
					Utility::WriteMemoryEx<float>(shootOffset + Offset::AccessoriesRecoveryFactor, writee);
					Utility::WriteMemoryEx<float>(shootOffset + Offset::RecoilKickADS, writee);
					Utility::WriteMemoryEx<float>(shootOffset + Offset::AnimationKick, writee);
				}
			}
		}
		/*int Ue4Base = Utility::ReadMemoryEx<int>(0xE0C3868);

		if (Setting::IpadVeiw)
		{

			Utility::WriteProtectedMemoryEx<float>(Ue4Base + 0x5483064, Setting::ipadview);
		}
		else
		{
			Utility::WriteProtectedMemoryEx<float>(Ue4Base + 0x5483064, 360.0f);

		}*/
		if (Setting::PowerMagic)
		{
			DWORD LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer  /*LocalPawn*/ + 0x2b24); // STExtraPlayerController* STPlayerController;//[Offset: 0x2834, Size: 4]
			if (LocalController)
			{
				DWORD Controller1 = 0x31c;
				DWORD ControlRotation = 0x318;
				DWORD PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + Offset::PlayerCameraManager);
				if (PlayerCameraManager)
				{
					CameraCacheEntry CameraCache = Utility::ReadMemoryEx<CameraCacheEntry>(PlayerCameraManager + Offset::CameraCache);
					VECTOR3 HeadPosition = ClosestToCrosshair();
					VECTOR3 currentViewAngle = CameraCache.POV.Location;
					if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
					{
						FRotator aimRotation = ToRotator(currentViewAngle, HeadPosition);
						CameraCache.POV.Rotation = aimRotation;
						Utility::WriteMemoryEx<CameraCacheEntry>(PlayerCameraManager + Offset::CameraCache, CameraCache);
					}
				}
			}
		}

		if (Setting::MagicX && IsChanged == false)
		{
			BYTE pattern[] = { 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
			BYTE patter2[] = { 0x00, 0x08, 0xF3, 0x45, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases2;
			DWORD oldprotect, temps;
			foundedBases2.clear();
			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
			for (int i = 0; i < foundedBases2.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);

			}
			IsChanged = true;
		}
		else if (!Setting::MagicX && IsChanged == true)
		{
			BYTE pattern[] = { 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
			BYTE patter2[] = { 0x00, 0x08, 0xF3, 0x45, 0x00, 0x00, 0x38, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f };
			DWORD bytes;
			std::vector<DWORD_PTR> foundedBases;
			DWORD oldprotect, temps;
			foundedBases.clear();
			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
			for (int i = 0; i < foundedBases.size(); i++)
			{
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);

			}
			IsChanged = false;
		}
		if (Setting::MagicX)
			std::this_thread::sleep_for(std::chrono::milliseconds(70));
		else {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}

		if (Setting::FastLoot)
		{
			Utility::WriteMemoryEx<bool>(Data::LocalPlayer + Offset::bEnablePlayerPickUpAnim, false);
		}

		if (Setting::FastSwitch)
		{

			DWORD weaponOffSet = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
			if (weaponOffSet != 0)
			{
				DWORD shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + Offset::ShootWeaponEntity);

				if (shootOffset != 0)
				{
					FLOAT WeaponSpeedScale = Utility::ReadMemoryEx<FLOAT>(Data::LocalPlayer + Offset::SwitchWeaponSpeedScale);
					if (WeaponSpeedScale != 100)
						Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::SwitchWeaponSpeedScale, 100.0f);
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}

