#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_push_coordination_message_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass push_coordination_message_bttask.push_coordination_message_bttask_C
// 0x0051 (0x00F1 - 0x00A0)
class Upush_coordination_message_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct Fcoordination_message                       Message;                                                  // 0x00A8(0x0020) (Edit, BlueprintVisible)
	struct FName                                       PayloadActorBBKey;                                        // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fcoordination_message                       LocalMessage;                                             // 0x00D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FailIfNotInA_Group;                                       // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass push_coordination_message_bttask.push_coordination_message_bttask_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_push_coordination_message_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
