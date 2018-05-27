// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_wisp_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Agatherable_wisp_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.UserConstructionScript");

	Agatherable_wisp_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.OnPickupPayload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter**       PlayerPickingUp                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_wisp_base_bp_C::OnPickupPayload(class AArchonCharacter** PlayerPickingUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.OnPickupPayload");

	Agatherable_wisp_base_bp_C_OnPickupPayload_Params params;
	params.PlayerPickingUp = PlayerPickingUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.ExecuteUbergraph_gatherable_wisp_base_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_wisp_base_bp_C::ExecuteUbergraph_gatherable_wisp_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.ExecuteUbergraph_gatherable_wisp_base_bp");

	Agatherable_wisp_base_bp_C_ExecuteUbergraph_gatherable_wisp_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
