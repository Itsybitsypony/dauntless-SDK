#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_send_gameplay_event_to_actor_bpo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass send_gameplay_event_to_actor_bpo.send_gameplay_event_to_actor_bpo_C
// 0x0014 (0x0064 - 0x0050)
class Usend_gameplay_event_to_actor_bpo_C : public UArchonGameplayOperation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventTag;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              EventMagnitude;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass send_gameplay_event_to_actor_bpo.send_gameplay_event_to_actor_bpo_C");
		return ptr;
	}


	void OnStart(struct FArchonGameplayOperationArgs* Args);
	void ExecuteUbergraph_send_gameplay_event_to_actor_bpo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
