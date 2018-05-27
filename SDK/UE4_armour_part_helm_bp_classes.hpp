#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_armour_part_helm_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass armour_part_helm_bp.armour_part_helm_bp_C
// 0x0060 (0x05F8 - 0x0598)
class Aarmour_part_helm_bp_C : public Aarmour_part_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (Transient, DuplicateTransient)
	bool                                               HasHelmetMorphTargets;                                    // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideFacialHair;                                           // 0x05A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasChinstrapCutmask;                                      // 0x05A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasVisibleHairline;                                       // 0x05A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	TMap<class USkeletalMesh*, TAssetPtr<class UTexture2D>> hair_cutmask_map;                                         // 0x05A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass armour_part_helm_bp.armour_part_helm_bp_C");
		return ptr;
	}


	void OnOwnerHidden(bool* Hidden, bool* OutHidden);
	void UserConstructionScript();
	void OnLoaded_96FACC83476ED76D0F2D16A46C247DD5(class UObject* Loaded);
	void ReEquip();
	void BP_OnArmourEquipped();
	void ExecuteUbergraph_armour_part_helm_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
