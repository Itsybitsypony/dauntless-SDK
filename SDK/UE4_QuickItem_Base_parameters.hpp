#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_QuickItem_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuickItem_Base.QuickItem_Base_C.GetDefaultPrimaryDye
struct UQuickItem_Base_C_GetDefaultPrimaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickItem_Base.QuickItem_Base_C.GetDefaultSecondaryDye
struct UQuickItem_Base_C_GetDefaultSecondaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickItem_Base.QuickItem_Base_C.GetPresentationInfo
struct UQuickItem_Base_C_GetPresentationInfo_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // (Parm, OutParm)
	struct FVector                                     DisplayOffset;                                            // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
