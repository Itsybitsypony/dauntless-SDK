#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bttask_set_boolean_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bttask_set_boolean.bttask_set_boolean_C
// 0x0031 (0x00D1 - 0x00A0)
class Ubttask_set_boolean_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Key;                                                      // 0x00A8(0x0028) (Edit, BlueprintVisible)
	bool                                               Value;                                                    // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bttask_set_boolean.bttask_set_boolean_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_bttask_set_boolean(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
