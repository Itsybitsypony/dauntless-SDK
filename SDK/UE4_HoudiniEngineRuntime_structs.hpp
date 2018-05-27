#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CustomMeshComponent_classes.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsMatrixOrder
enum class EHoudiniRuntimeSettingsMatrixOrder : uint8_t
{
	HRSMO_TRS                      = 0,
	HRSMO_TSR                      = 1,
	HRSMO_RTS                      = 2,
	HRSMO_RST                      = 3,
	HRSMO_STR                      = 4,
	HRSMO_SRT                      = 5,
	HRSMO_MAX                      = 6
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsAxisImport
enum class EHoudiniRuntimeSettingsAxisImport : uint8_t
{
	HRSAI_Unreal                   = 0,
	HRSAI_Houdini                  = 1,
	HRSAI_MAX                      = 2
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Nothing                  = 2,
	HRSRF_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_MAX                      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HoudiniEngineRuntime.HoudiniArchonLevelGraphZone
// 0x0028
struct FHoudiniArchonLevelGraphZone
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      Name;                                                     // 0x0008(0x0010) (ZeroConstructor)
	struct FVector2D                                   Radius;                                                   // 0x0018(0x0008) (IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0020(0x0008) (IsPlainOldData)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniArchonLevelGraphLink
// 0x000C
struct FHoudiniArchonLevelGraphLink
{
	int                                                LeftId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RightId;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLeftToRight;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRightToLeft;                                             // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bGapped;                                                  // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
