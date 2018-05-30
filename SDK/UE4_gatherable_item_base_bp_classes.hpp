#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_item_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gatherable_item_base_bp.gatherable_item_base_bp_C
// 0x003C (0x0440 - 0x0404)
class Agatherable_item_base_bp_C : public Amesh_swap_interaction_bp_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            HighlightUIWidget;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      GrantItemId;                                              // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fgatherable_interaction_buff>        AbilitiesToGiveOnInteract;                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Mid_1;                                                    // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gatherable_item_base_bp.gatherable_item_base_bp_C");
		return ptr;
	}


	void SetGrantItemID(const class FString& GatherID, bool* Output);
	void EnableHighlightForDuration(float Duration, bool* Output);
	void UserConstructionScript();
	void SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime);
	void OnUserCompletedInteraction(class UArchonInteractionUserComponent** User);
	void EventOnEnableHighlight(float Duration);
	void EventOnDisableHighlight();
	void SwapMesh();
	void ExecuteUbergraph_gatherable_item_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
