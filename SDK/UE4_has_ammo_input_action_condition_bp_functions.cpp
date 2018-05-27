// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_has_ammo_input_action_condition_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function has_ammo_input_action_condition_bp.has_ammo_input_action_condition_bp_C.CanExecuteAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uhas_ammo_input_action_condition_bp_C::CanExecuteAction(class AArchonCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function has_ammo_input_action_condition_bp.has_ammo_input_action_condition_bp_C.CanExecuteAction");

	Uhas_ammo_input_action_condition_bp_C_CanExecuteAction_Params params;
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
