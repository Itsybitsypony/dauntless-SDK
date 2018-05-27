// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hair_ponytail_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function hair_ponytail_bp.hair_ponytail_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ahair_ponytail_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function hair_ponytail_bp.hair_ponytail_bp_C.UserConstructionScript");

	Ahair_ponytail_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hair_ponytail_bp.hair_ponytail_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ahair_ponytail_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function hair_ponytail_bp.hair_ponytail_bp_C.ReceiveBeginPlay");

	Ahair_ponytail_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hair_ponytail_bp.hair_ponytail_bp_C.ExecuteUbergraph_hair_ponytail_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahair_ponytail_bp_C::ExecuteUbergraph_hair_ponytail_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function hair_ponytail_bp.hair_ponytail_bp_C.ExecuteUbergraph_hair_ponytail_bp");

	Ahair_ponytail_bp_C_ExecuteUbergraph_hair_ponytail_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
