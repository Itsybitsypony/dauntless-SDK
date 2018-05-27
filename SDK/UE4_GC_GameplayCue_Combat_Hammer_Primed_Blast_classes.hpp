#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_Hammer_Primed_Blast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C
// 0x0010 (0x0440 - 0x0430)
class AGC_GameplayCue_Combat_Hammer_Primed_Blast_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GC_GameplayCue_Combat_Hammer_Primed_Blast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
