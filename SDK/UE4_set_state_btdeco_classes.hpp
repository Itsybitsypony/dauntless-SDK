#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_set_state_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass set_state_btdeco.set_state_btdeco_C
// 0x000A (0x00AA - 0x00A0)
class Uset_state_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ValueOfStateWhileRunning;                                 // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass set_state_btdeco.set_state_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverActivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverDeactivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_set_state_btdeco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
