// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moonface_weak_action_set_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function moonface_weak_action_set.moonface_weak_action_set_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Amoonface_weak_action_set_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function moonface_weak_action_set.moonface_weak_action_set_C.UserConstructionScript");

	Amoonface_weak_action_set_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function moonface_weak_action_set.moonface_weak_action_set_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Amoonface_weak_action_set_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function moonface_weak_action_set.moonface_weak_action_set_C.ReceiveBeginPlay");

	Amoonface_weak_action_set_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function moonface_weak_action_set.moonface_weak_action_set_C.ExecuteUbergraph_moonface_weak_action_set
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amoonface_weak_action_set_C::ExecuteUbergraph_moonface_weak_action_set(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function moonface_weak_action_set.moonface_weak_action_set_C.ExecuteUbergraph_moonface_weak_action_set");

	Amoonface_weak_action_set_C_ExecuteUbergraph_moonface_weak_action_set_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
