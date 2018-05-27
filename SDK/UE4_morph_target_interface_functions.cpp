// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_morph_target_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function morph_target_interface.morph_target_interface_C.GetMorphTargetDriver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MorphTargetOwner               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  AnimInstanceOwner              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umorph_target_interface_C::GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function morph_target_interface.morph_target_interface_C.GetMorphTargetDriver");

	Umorph_target_interface_C_GetMorphTargetDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MorphTargetOwner != nullptr)
		*MorphTargetOwner = params.MorphTargetOwner;
	if (AnimInstanceOwner != nullptr)
		*AnimInstanceOwner = params.AnimInstanceOwner;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
