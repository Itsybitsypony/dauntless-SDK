// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_not_full_ammo_input_action_condition_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function not_full_ammo_input_action_condition_bp.not_full_ammo_input_action_condition_bp_C.CanExecuteAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Unot_full_ammo_input_action_condition_bp_C::CanExecuteAction(class AArchonCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function not_full_ammo_input_action_condition_bp.not_full_ammo_input_action_condition_bp_C.CanExecuteAction");

	Unot_full_ammo_input_action_condition_bp_C_CanExecuteAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
