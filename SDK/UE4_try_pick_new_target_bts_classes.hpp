#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_try_pick_new_target_bts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass try_pick_new_target_bts.try_pick_new_target_bts_C
// 0x000A (0x00A2 - 0x0098)
class Utry_pick_new_target_bts_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	bool                                               OnSearchStart;                                            // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnTick;                                                   // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass try_pick_new_target_bts.try_pick_new_target_bts_C");
		return ptr;
	}


	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ChristmasCheer(class APawn* ControlledPawn);
	void ExecuteUbergraph_try_pick_new_target_bts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
