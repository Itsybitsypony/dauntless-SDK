#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_UsingActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_UsingActor.BPI_UsingActor_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_UsingActor_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_UsingActor.BPI_UsingActor_C");
		return ptr;
	}


	void StartInteracting(class AActor* InteractiveActor, bool* Interacting);
	void OnConsumeUseCost(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Resource_Cost, bool* Successful_);
	void OnStartUse(class UAnimMontage* Using_Montage);
	void OnCompleteUse(bool Successful_, class UAnimMontage* InteractionMontage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
