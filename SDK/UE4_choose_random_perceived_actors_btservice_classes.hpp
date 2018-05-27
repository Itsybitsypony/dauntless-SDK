#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_choose_random_perceived_actors_btservice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass choose_random_perceived_actors_btservice.choose_random_perceived_actors_btservice_C
// 0x0060 (0x00F8 - 0x0098)
class Uchoose_random_perceived_actors_btservice_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Sense;                                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      ChosenBBKey;                                              // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DeactivationBBKey;                                        // 0x00D0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass choose_random_perceived_actors_btservice.choose_random_perceived_actors_btservice_C");
		return ptr;
	}


	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_choose_random_perceived_actors_btservice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
