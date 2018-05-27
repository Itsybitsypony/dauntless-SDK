// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_can_use_quick_slot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_can_use_quick_slot.BPI_can_use_quick_slot_C.CanUseQuickSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanUseInBleedout               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_can_use_quick_slot_C::CanUseQuickSlotItem(bool CanUseInBleedout, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_can_use_quick_slot.BPI_can_use_quick_slot_C.CanUseQuickSlotItem");

	UBPI_can_use_quick_slot_C_CanUseQuickSlotItem_Params params;
	params.CanUseInBleedout = CanUseInBleedout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
