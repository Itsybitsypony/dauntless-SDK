// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_camera_helper_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function camera_helper_function_library.camera_helper_function_library_C.CalculateWorldCameraLagTarget
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PreviousTargetOffset           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MinLagDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxLagDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetOffset                   (Parm, OutParm, IsPlainOldData)

void Ucamera_helper_function_library_C::STATIC_CalculateWorldCameraLagTarget(class ABP_PlayerCharacter_C* Player, const struct FVector& PreviousTargetOffset, float MinLagDistance, float MaxLagDistance, class UObject* __WorldContext, struct FVector* TargetOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function camera_helper_function_library.camera_helper_function_library_C.CalculateWorldCameraLagTarget");

	Ucamera_helper_function_library_C_CalculateWorldCameraLagTarget_Params params;
	params.Player = Player;
	params.PreviousTargetOffset = PreviousTargetOffset;
	params.MinLagDistance = MinLagDistance;
	params.MaxLagDistance = MaxLagDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetOffset != nullptr)
		*TargetOffset = params.TargetOffset;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
