#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactioncode_component_player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_interactioncode_component_player.base_interactioncode_component_player_C
// 0x0028 (0x0300 - 0x02D8)
class Ubase_interactioncode_component_player_C : public Ubase_interactioncode_component_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (Transient, DuplicateTransient)
	int                                                NumPlayersRevivingMe;                                     // 0x02E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractionDuration_Fast;                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractionDuration_Fastest;                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class UAnimMontage*                                InteractionMontage_Fast;                                  // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                InteractionMontage_Fastest;                               // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_interactioncode_component_player.base_interactioncode_component_player_C");
		return ptr;
	}


	class UAnimMontage* GetPlayerInteractionMontage(class UArchonInteractionUserComponent** User);
	float GetInteractionDuration(class UArchonInteractionUserComponent** User);
	void CancelFill(class UArchonInteractionUserComponent* User);
	bool BlueprintCanUserStartInteraction(class UArchonInteractionUserComponent** User);
	void ReceiveBeginPlay();
	void UserCompletedInteraction(class UArchonInteractionUserComponent** User);
	void UserStartedInteraction(class UArchonInteractionUserComponent** User);
	void UserCanceledInteraction(class UArchonInteractionUserComponent** User);
	void ExecuteUbergraph_base_interactioncode_component_player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
