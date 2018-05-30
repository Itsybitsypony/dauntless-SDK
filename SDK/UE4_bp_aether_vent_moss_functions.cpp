// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_aether_vent_moss_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_aether_vent_moss.bp_aether_vent_moss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_aether_vent_moss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_moss.bp_aether_vent_moss_C.UserConstructionScript");

	Abp_aether_vent_moss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_moss.bp_aether_vent_moss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abp_aether_vent_moss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_moss.bp_aether_vent_moss_C.ReceiveBeginPlay");

	Abp_aether_vent_moss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_moss.bp_aether_vent_moss_C.ExecuteUbergraph_bp_aether_vent_moss
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_aether_vent_moss_C::ExecuteUbergraph_bp_aether_vent_moss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_moss.bp_aether_vent_moss_C.ExecuteUbergraph_bp_aether_vent_moss");

	Abp_aether_vent_moss_C_ExecuteUbergraph_bp_aether_vent_moss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
