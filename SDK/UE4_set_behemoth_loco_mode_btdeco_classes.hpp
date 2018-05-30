#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_set_behemoth_loco_mode_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C
// 0x000A (0x00AA - 0x00A0)
class Uset_behemoth_loco_mode_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<Ebehemoth_loco_type>                   LocoType;                                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_loco_type>                   InitialLocoState;                                         // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverActivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverDeactivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_set_behemoth_loco_mode_btdeco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
