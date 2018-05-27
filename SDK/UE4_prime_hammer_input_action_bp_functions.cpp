// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_prime_hammer_input_action_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function prime_hammer_input_action_bp.prime_hammer_input_action_bp_C.ExecuteAction
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprime_hammer_input_action_bp_C::ExecuteAction(class AArchonCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function prime_hammer_input_action_bp.prime_hammer_input_action_bp_C.ExecuteAction");

	Uprime_hammer_input_action_bp_C_ExecuteAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
