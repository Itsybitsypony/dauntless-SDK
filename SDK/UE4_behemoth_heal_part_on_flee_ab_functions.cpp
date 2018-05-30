// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_heal_part_on_flee_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_heal_part_on_flee_ab.behemoth_heal_part_on_flee_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ubehemoth_heal_part_on_flee_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_heal_part_on_flee_ab.behemoth_heal_part_on_flee_ab_C.K2_ActivateAbility");

	Ubehemoth_heal_part_on_flee_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_heal_part_on_flee_ab.behemoth_heal_part_on_flee_ab_C.ExecuteUbergraph_behemoth_heal_part_on_flee_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_heal_part_on_flee_ab_C::ExecuteUbergraph_behemoth_heal_part_on_flee_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_heal_part_on_flee_ab.behemoth_heal_part_on_flee_ab_C.ExecuteUbergraph_behemoth_heal_part_on_flee_ab");

	Ubehemoth_heal_part_on_flee_ab_C_ExecuteUbergraph_behemoth_heal_part_on_flee_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
