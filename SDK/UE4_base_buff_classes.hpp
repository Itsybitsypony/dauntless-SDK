#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_buff.base_buff_C
// 0x0024 (0x06DC - 0x06B8)
class Abase_buff_C : public AArchonBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      IconGameplayEffect;                                       // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 IconGameplayEffectHandle;                                 // 0x06D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ModifyDamageEventPriority;                                // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_buff.base_buff_C");
		return ptr;
	}


	void GetModifyDamageEventPriority(int* Priority);
	void CustomModifyDamageEventData(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags);
	void GetVFXAttachPoint(class USceneComponent** AttachComponent);
	void UserConstructionScript();
	void OnAdded();
	void OnRemoved();
	void ReceiveDestroyed();
	void ExecuteUbergraph_base_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
