// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_simple_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function aoe_simple.aoe_simple_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aaoe_simple_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_simple.aoe_simple_C.UserConstructionScript");

	Aaoe_simple_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_simple.aoe_simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aaoe_simple_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_simple.aoe_simple_C.ReceiveBeginPlay");

	Aaoe_simple_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_simple.aoe_simple_C.CustomAOELogic
// (BlueprintCallable, BlueprintEvent)

void Aaoe_simple_C::CustomAOELogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_simple.aoe_simple_C.CustomAOELogic");

	Aaoe_simple_C_CustomAOELogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_simple.aoe_simple_C.ExecuteUbergraph_aoe_simple
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_simple_C::ExecuteUbergraph_aoe_simple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_simple.aoe_simple_C.ExecuteUbergraph_aoe_simple");

	Aaoe_simple_C_ExecuteUbergraph_aoe_simple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
