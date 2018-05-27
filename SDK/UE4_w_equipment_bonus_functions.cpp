// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_equipment_bonus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_equipment_bonus.w_equipment_bonus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_equipment_bonus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_bonus.w_equipment_bonus_C.Construct");

	Uw_equipment_bonus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_bonus.w_equipment_bonus_C.ExecuteUbergraph_w_equipment_bonus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_bonus_C::ExecuteUbergraph_w_equipment_bonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_bonus.w_equipment_bonus_C.ExecuteUbergraph_w_equipment_bonus");

	Uw_equipment_bonus_C_ExecuteUbergraph_w_equipment_bonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
