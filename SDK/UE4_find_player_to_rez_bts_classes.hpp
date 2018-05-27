#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_find_player_to_rez_bts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass find_player_to_rez_bts.find_player_to_rez_bts_C
// 0x0008 (0x00A0 - 0x0098)
class Ufind_player_to_rez_bts_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass find_player_to_rez_bts.find_player_to_rez_bts_C");
		return ptr;
	}


	void GetBleedingOutSlayer(class AController* Controller);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_find_player_to_rez_bts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
