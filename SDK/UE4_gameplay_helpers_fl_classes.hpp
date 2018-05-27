#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_helpers_fl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gameplay_helpers_fl.gameplay_helpers_fl_C
// 0x0000 (0x0028 - 0x0028)
class Ugameplay_helpers_fl_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gameplay_helpers_fl.gameplay_helpers_fl_C");
		return ptr;
	}


	void STATIC_ApplyBuffs_UseBuffApplierIfPossible(class AActor* Instigator, class UClass* BuffClass, class AActor* BuffTarget, const struct FHitResult& HitResult, bool StartBuff, class UObject* __WorldContext, class AArchonBuff** BuffRef, bool* BuffWasReplacedByOverrides);
	void STATIC_ApplyGameplayEffects(class AActor* SourceActor, class AActor* TargetActor, class UObject* __WorldContext, TArray<struct Feffect_magitudes_struct>* Effects);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
