// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_ai_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fauna_ai_interface.fauna_ai_interface_C.SetLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Efauna_loco_state_enum> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufauna_ai_interface_C::SetLocoState(TEnumAsByte<Efauna_loco_state_enum> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_ai_interface.fauna_ai_interface_C.SetLocoState");

	Ufauna_ai_interface_C_SetLocoState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
