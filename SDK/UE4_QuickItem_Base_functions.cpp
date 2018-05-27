// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_QuickItem_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuickItem_Base.QuickItem_Base_C.GetDefaultPrimaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuickItem_Base_C::GetDefaultPrimaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickItem_Base.QuickItem_Base_C.GetDefaultPrimaryDye");

	UQuickItem_Base_C_GetDefaultPrimaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function QuickItem_Base.QuickItem_Base_C.GetDefaultSecondaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuickItem_Base_C::GetDefaultSecondaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickItem_Base.QuickItem_Base_C.GetDefaultSecondaryDye");

	UQuickItem_Base_C_GetDefaultSecondaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function QuickItem_Base.QuickItem_Base_C.GetPresentationInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USkeletalMesh> SkeletalMesh                   (Parm, OutParm)
// struct FVector                 DisplayOffset                  (Parm, OutParm, IsPlainOldData)

void UQuickItem_Base_C::GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickItem_Base.QuickItem_Base_C.GetPresentationInfo");

	UQuickItem_Base_C_GetPresentationInfo_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (DisplayOffset != nullptr)
		*DisplayOffset = params.DisplayOffset;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
