// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonLobbyHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonLobbyHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.UserConstructionScript");

	ABPH_ArchonLobbyHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPH_ArchonLobbyHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveBeginPlay");

	ABPH_ArchonLobbyHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABPH_ArchonLobbyHUD_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveGameplayStart");

	ABPH_ArchonLobbyHUD_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.Escape Menu
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonLobbyHUD_C::Escape_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.Escape Menu");

	ABPH_ArchonLobbyHUD_C_Escape_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ShowLobby
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonLobbyHUD_C::ShowLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ShowLobby");

	ABPH_ArchonLobbyHUD_C_ShowLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonLobbyHUD_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveEndPlay");

	ABPH_ArchonLobbyHUD_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ExecuteUbergraph_BPH_ArchonLobbyHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonLobbyHUD_C::ExecuteUbergraph_BPH_ArchonLobbyHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ExecuteUbergraph_BPH_ArchonLobbyHUD");

	ABPH_ArchonLobbyHUD_C_ExecuteUbergraph_BPH_ArchonLobbyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
