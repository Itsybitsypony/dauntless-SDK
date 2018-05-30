#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTDeco_CollisionSweep_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDeco_CollisionSweep.BTDeco_CollisionSweep_C
// 0x000D (0x00AD - 0x00A0)
class UBTDeco_CollisionSweep_C : public UBTDecorator_BlueprintBase
{
public:
	struct FVector                                     ActionDisplacement;                                       // 0x00A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Result;                                                   // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDeco_CollisionSweep.BTDeco_CollisionSweep_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
