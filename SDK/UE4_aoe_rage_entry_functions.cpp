// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_rage_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function aoe_rage_entry.aoe_rage_entry_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aaoe_rage_entry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_rage_entry.aoe_rage_entry_C.UserConstructionScript");

	Aaoe_rage_entry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_rage_entry.aoe_rage_entry_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aaoe_rage_entry_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_rage_entry.aoe_rage_entry_C.ReceiveBeginPlay");

	Aaoe_rage_entry_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_rage_entry.aoe_rage_entry_C.ExecuteUbergraph_aoe_rage_entry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_rage_entry_C::ExecuteUbergraph_aoe_rage_entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_rage_entry.aoe_rage_entry_C.ExecuteUbergraph_aoe_rage_entry");

	Aaoe_rage_entry_C_ExecuteUbergraph_aoe_rage_entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
