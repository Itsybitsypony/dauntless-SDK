#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactioncode_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_interactioncode_component.base_interactioncode_component_C
// 0x0028 (0x02D8 - 0x02B0)
class Ubase_interactioncode_component_C : public UArchonInteractionComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	class APawn*                                       UsingPawn;                                                // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ChildCounter;                                             // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	class FString                                      Interaction_State;                                        // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_interactioncode_component.base_interactioncode_component_C");
		return ptr;
	}


	bool BlueprintCanUserStartInteraction(class UArchonInteractionUserComponent** User);
	void ReceiveBeginPlay();
	void UserStartedInteraction(class UArchonInteractionUserComponent* User);
	void UserCanceledInteraction(class UArchonInteractionUserComponent* User);
	void UserCompletedInteraction(class UArchonInteractionUserComponent* User);
	void HighlightInteraction(class UArchonInteractionUserComponent** User);
	void UnhighlightInteraction(class UArchonInteractionUserComponent** User);
	void ExecuteUbergraph_base_interactioncode_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
