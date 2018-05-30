#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_ak_event_btservice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_ak_event_btservice.behemoth_ak_event_btservice_C
// 0x0030 (0x00C8 - 0x0098)
class Ubehemoth_ak_event_btservice_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	TArray<class UAkAudioEvent*>                       EventsOnActivate;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAkAudioEvent*>                       EventsOnDeactivate;                                       // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ActivateDelay;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeactivateDelay;                                          // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_ak_event_btservice.behemoth_ak_event_btservice_C");
		return ptr;
	}


	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_behemoth_ak_event_btservice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
