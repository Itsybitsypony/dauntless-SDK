// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_armorset_bonuslist_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_armorset_bonuslist_entry.bpw_debug_armorset_bonuslist_entry_C.SetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           Bonuses                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BonusActive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_armorset_bonuslist_entry_C::SetData(int SetSize, bool BonusActive, TArray<struct FText>* Bonuses)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_armorset_bonuslist_entry.bpw_debug_armorset_bonuslist_entry_C.SetData");

	Ubpw_debug_armorset_bonuslist_entry_C_SetData_Params params;
	params.SetSize = SetSize;
	params.BonusActive = BonusActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bonuses != nullptr)
		*Bonuses = params.Bonuses;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
