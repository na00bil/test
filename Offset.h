#pragma once

#include "Includes.h"

namespace Offset
{
	const DWORD PersistentLevel = 0x20;
	const DWORD NetDriver = 0x24;
	const DWORD ServerConnection = 0x64;
	const DWORD PlayerController = 0x20;
	const DWORD AcknowledgedPawn = 0x400;
	const DWORD EntityList = 0x868;  ///noor
	const DWORD EntityCount = EntityList + 4;
	const DWORD gameInstance = 0x324; //noor
	//const DWORD playerController = 96;
	const DWORD playerCarry = 0x20; //noor
	const DWORD RootComponent = 0x1b0;
	const DWORD CurrentStates = 0xc48;
	const DWORD  MyHUD = 0x40c;

	
	// AActor
	const DWORD TeamId = 0x748;
	const DWORD PoseState = 0xfc8;
	const DWORD IsBot = 0x7ed;
	const DWORD IsDead = 0xb00;
	const DWORD Name = 0x720;
	const DWORD Status = 0x3c0;//////
	const DWORD Nation = 0x72c;
	const DWORD Health = 0xae8;
	const DWORD HealthMax = 0xaec;


	// Bone
	const DWORD Mesh = 0x3f0;
	const DWORD BodyAddv = 0x190;
	const DWORD MinLOD = 0x870;

	const int ShootWeapon = 0xf9c;/////
	const DWORD CurBulletNumInClip = 0x0;
	const DWORD CurMaxBulletNumInOneClip = 0xd18;
	const DWORD ScopeFov = 0x1674;
	const DWORD gNames = 0x539FA00;

	const DWORD CharacterMovement = 0x3f4;
	const DWORD LastUpdateVelocity = 0x2b0;
	const DWORD Velocity = 0x12c;

	const DWORD RelativeLocation = 0x178;
	const DWORD RelativeRotation = 0x184;
	const DWORD Position = 0x1bc;
	const DWORD IsVisible = 0x26c;
	const DWORD LocalController = 0xd0; //STExtraPlayerController* STPlayerController;//[Offset
	// Camera
	const DWORD PlayerCameraManager = 0x410;
	const DWORD CameraCache = 0x420;
	const DWORD POV = 0x10;
	const DWORD Location = 0x7143130;
	const DWORD Rotation = 0x3C8;
	const DWORD FOV = 0x334;
	const DWORD SpringArmComp = 0x16a0;
	const DWORD MeshContainer = 0x1528;
	const DWORD bEnablePlayerPickUpAnim = 0x1a9a;//float voiceCheckShowCD;//[Offset: 
	const DWORD ExtraBoostFactor = 0x19f8;//float ExtraBoostFactor;//[Offset:
	const DWORD bIsEngineStarted = 0x92c;; //bool bIsEngineStarted;//(ByteOffset: 0, ByteMask: 1, FieldMask: 2
	const DWORD CharacterParachuteComponent = 0x122c; //CharacterParachuteComponent* ParachuteComponent

	// Instant hit
	const DWORD CurrentReloadWeapon = 0x26cc;//0x1a4c;
	const DWORD CurrWeapon = 0x579b68c;
	const DWORD CharacterOverrideAttrs = 0xed0;
	const DWORD CurrentFallSpeed = 0x1ac;

	const DWORD ForceTPP = 0xc9;
	const DWORD STPlayerController = 0x3c78;
	const DWORD ScopeCameraComp = 0x16b8;

	// NoRecoil offsets
	const DWORD AccessoriesVRecoilFactor = 0x9c4;
	const DWORD AccessoriesHRecoilFactor = 0x9cc;
	const DWORD AccessoriesRecoveryFactor = 0x9c8;
	extern INT MyTeamID;
	const DWORD NearDeathBreath = 0x1590;
	const DWORD ExtraShootInterval = 0x4bc;
	const DWORD BulletFireSpeed = 0x484;
	const DWORD ShootInterval = 0x4b4;
	const DWORD ShootWeaponEntity = 0xf9c;
	const DWORD ShotGunVerticalSpread = 0xa24;
	const DWORD ShotGunHorizontalSpread = 0xa28;
	const DWORD GameDeviationFactor = 0xa18;
	const DWORD RecoilKickADS = 0xad8;
	const DWORD AnimationKick = 0xadc;
	const DWORD LaunchGravityScale = 0x400;
	const DWORD SwitchWeaponSpeedScale = 0x2240;
	const DWORD Controller = 0x3CC;
	const DWORD ControlRotation = 0x3C8;
	const DWORD weaponOffset = 0x1DC0;

	////vehicle
	const  DWORD VehicleCommon = 0x960;

	const  DWORD HP = 0x280;
	const  DWORD HPMax = 0x27c;
	const  DWORD FuelMax = 0x32c;
	const  DWORD Fuel = 0x330;
}
