// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactionusercode_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_interactionusercode_component.base_interactionusercode_component_C.BlueprintCanStartInteraction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionComponent** interactionTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubase_interactionusercode_component_C::BlueprintCanStartInteraction(class UArchonInteractionComponent** interactionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactionusercode_component.base_interactionusercode_component_C.BlueprintCanStartInteraction");

	Ubase_interactionusercode_component_C_BlueprintCanStartInteraction_Params params;
	params.interactionTarget = interactionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
