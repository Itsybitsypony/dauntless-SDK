#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_calc_knowntargetavgpos_btservice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C
// 0x0018 (0x00B0 - 0x0098)
class Ucalc_knowntargetavgpos_btservice_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	TArray<class AActor*>                              LocalActorArray;                                          // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_calc_knowntargetavgpos_btservice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
