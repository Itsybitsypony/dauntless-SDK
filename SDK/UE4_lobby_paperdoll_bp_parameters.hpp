#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_paperdoll_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetFacialHair
struct Alobby_paperdoll_bp_C_SetFacialHair_Params
{
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetupHair
struct Alobby_paperdoll_bp_C_SetupHair_Params
{
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetupFaceAndAppearance
struct Alobby_paperdoll_bp_C_SetupFaceAndAppearance_Params
{
	TArray<struct FAppearanceStringData>               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.GetScreenSpacePositionBottom
struct Alobby_paperdoll_bp_C_GetScreenSpacePositionBottom_Params
{
	class APlayerController*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.GetScreenSpacePositionTop
struct Alobby_paperdoll_bp_C_GetScreenSpacePositionTop_Params
{
	class APlayerController*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.UserConstructionScript
struct Alobby_paperdoll_bp_C_UserConstructionScript_Params
{
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.ReceiveBeginPlay
struct Alobby_paperdoll_bp_C_ReceiveBeginPlay_Params
{
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.BlueprintSetupSkinAndAppearance
struct Alobby_paperdoll_bp_C_BlueprintSetupSkinAndAppearance_Params
{
	TArray<struct FAppearanceStringData>*              StringData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.BlueprintSetDye
struct Alobby_paperdoll_bp_C_BlueprintSetDye_Params
{
	struct FName*                                      DyeName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>*           DynamicMaterials;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bPrimary;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.ExecuteUbergraph_lobby_paperdoll_bp
struct Alobby_paperdoll_bp_C_ExecuteUbergraph_lobby_paperdoll_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
