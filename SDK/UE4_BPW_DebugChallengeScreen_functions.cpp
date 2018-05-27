// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugChallengeScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.CreateTracks
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugChallengeScreen_C::CreateTracks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.CreateTracks");

	UBPW_DebugChallengeScreen_C_CreateTracks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugChallengeScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.Show");

	UBPW_DebugChallengeScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.CreateTrack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrackName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugChallengeScreen_C::CreateTrack(const struct FName& TrackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.CreateTrack");

	UBPW_DebugChallengeScreen_C_CreateTrack_Params params;
	params.TrackName = TrackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.ChallengeListUpdated
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugChallengeScreen_C::ChallengeListUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.ChallengeListUpdated");

	UBPW_DebugChallengeScreen_C_ChallengeListUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.UpdateScreen
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugChallengeScreen_C::UpdateScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.UpdateScreen");

	UBPW_DebugChallengeScreen_C_UpdateScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.TracksUpdated
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugChallengeScreen_C::TracksUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.TracksUpdated");

	UBPW_DebugChallengeScreen_C_TracksUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.ExecuteUbergraph_BPW_DebugChallengeScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugChallengeScreen_C::ExecuteUbergraph_BPW_DebugChallengeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.ExecuteUbergraph_BPW_DebugChallengeScreen");

	UBPW_DebugChallengeScreen_C_ExecuteUbergraph_BPW_DebugChallengeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
