// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_TeamNameDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_TeamNameDisplay.BPW_TeamNameDisplay_C.Update Player Names
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_TeamNameDisplay_C::Update_Player_Names()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamNameDisplay.BPW_TeamNameDisplay_C.Update Player Names");

	UBPW_TeamNameDisplay_C_Update_Player_Names_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamNameDisplay.BPW_TeamNameDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_TeamNameDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamNameDisplay.BPW_TeamNameDisplay_C.Construct");

	UBPW_TeamNameDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamNameDisplay.BPW_TeamNameDisplay_C.ExecuteUbergraph_BPW_TeamNameDisplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_TeamNameDisplay_C::ExecuteUbergraph_BPW_TeamNameDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamNameDisplay.BPW_TeamNameDisplay_C.ExecuteUbergraph_BPW_TeamNameDisplay");

	UBPW_TeamNameDisplay_C_ExecuteUbergraph_BPW_TeamNameDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
