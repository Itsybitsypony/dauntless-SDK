// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_frost_cone_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eb_frost_cone_bp.eb_frost_cone_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aeb_frost_cone_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_frost_cone_bp.eb_frost_cone_bp_C.UserConstructionScript");

	Aeb_frost_cone_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_frost_cone_bp.eb_frost_cone_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aeb_frost_cone_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_frost_cone_bp.eb_frost_cone_bp_C.ReceiveBeginPlay");

	Aeb_frost_cone_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_frost_cone_bp.eb_frost_cone_bp_C.ExecuteUbergraph_eb_frost_cone_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeb_frost_cone_bp_C::ExecuteUbergraph_eb_frost_cone_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_frost_cone_bp.eb_frost_cone_bp_C.ExecuteUbergraph_eb_frost_cone_bp");

	Aeb_frost_cone_bp_C_ExecuteUbergraph_eb_frost_cone_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
