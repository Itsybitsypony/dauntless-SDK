#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_QuickItem_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass QuickItem_Base.QuickItem_Base_C
// 0x0020 (0x00F0 - 0x00D0)
class UQuickItem_Base_C : public UArchonInventoryItem_QuickItem
{
public:
	TAssetPtr<class USkeletalMesh>                     UIPreviewMesh;                                            // 0x00D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuickItem_Base.QuickItem_Base_C");
		return ptr;
	}


	void GetDefaultPrimaryDye(struct FName* DyeRowName);
	void GetDefaultSecondaryDye(struct FName* DyeRowName);
	void GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
