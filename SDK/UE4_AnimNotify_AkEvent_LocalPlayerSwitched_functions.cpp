// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AnimNotify_AkEvent_LocalPlayerSwitched_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent_LocalPlayerSwitched.AnimNotify_AkEvent_LocalPlayerSwitched_C.PlayEvent
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent**        TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_AkEvent_LocalPlayerSwitched_C::PlayEvent(class USceneComponent** TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent_LocalPlayerSwitched.AnimNotify_AkEvent_LocalPlayerSwitched_C.PlayEvent");

	UAnimNotify_AkEvent_LocalPlayerSwitched_C_PlayEvent_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
