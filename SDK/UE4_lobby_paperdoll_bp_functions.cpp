// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_paperdoll_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetFacialHair
// (Public, BlueprintCallable, BlueprintEvent)

void Alobby_paperdoll_bp_C::SetFacialHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetFacialHair");

	Alobby_paperdoll_bp_C_SetFacialHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetupHair
// (Public, BlueprintCallable, BlueprintEvent)

void Alobby_paperdoll_bp_C::SetupHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetupHair");

	Alobby_paperdoll_bp_C_SetupHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetupFaceAndAppearance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Alobby_paperdoll_bp_C::SetupFaceAndAppearance(TArray<struct FAppearanceStringData>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.SetupFaceAndAppearance");

	Alobby_paperdoll_bp_C_SetupFaceAndAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.GetScreenSpacePositionBottom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Location                       (Parm, OutParm, IsPlainOldData)

void Alobby_paperdoll_bp_C::GetScreenSpacePositionBottom(class APlayerController* Player, struct FVector2D* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.GetScreenSpacePositionBottom");

	Alobby_paperdoll_bp_C_GetScreenSpacePositionBottom_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.GetScreenSpacePositionTop
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Location                       (Parm, OutParm, IsPlainOldData)

void Alobby_paperdoll_bp_C::GetScreenSpacePositionTop(class APlayerController* Player, struct FVector2D* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.GetScreenSpacePositionTop");

	Alobby_paperdoll_bp_C_GetScreenSpacePositionTop_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alobby_paperdoll_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.UserConstructionScript");

	Alobby_paperdoll_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Alobby_paperdoll_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.ReceiveBeginPlay");

	Alobby_paperdoll_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.BlueprintSetupSkinAndAppearance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData>* StringData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Alobby_paperdoll_bp_C::BlueprintSetupSkinAndAppearance(TArray<struct FAppearanceStringData>* StringData)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.BlueprintSetupSkinAndAppearance");

	Alobby_paperdoll_bp_C_BlueprintSetupSkinAndAppearance_Params params;
	params.StringData = StringData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.BlueprintSetDye
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  DyeName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*>* DynamicMaterials               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bPrimary                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_paperdoll_bp_C::BlueprintSetDye(struct FName* DyeName, TArray<class UMaterialInstanceDynamic*>* DynamicMaterials, bool* bPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.BlueprintSetDye");

	Alobby_paperdoll_bp_C_BlueprintSetDye_Params params;
	params.DyeName = DyeName;
	params.DynamicMaterials = DynamicMaterials;
	params.bPrimary = bPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.ExecuteUbergraph_lobby_paperdoll_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_paperdoll_bp_C::ExecuteUbergraph_lobby_paperdoll_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_paperdoll_bp.lobby_paperdoll_bp_C.ExecuteUbergraph_lobby_paperdoll_bp");

	Alobby_paperdoll_bp_C_ExecuteUbergraph_lobby_paperdoll_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
