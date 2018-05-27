#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_interaction_owner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_interaction_owner.BPI_interaction_owner_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_interaction_owner_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_interaction_owner.BPI_interaction_owner_C");
		return ptr;
	}


	void StartActorInteraction(class APawn* Pawn, bool* Started);
	void Unhighlight(class APawn* Pawn, bool* Unhighlighted);
	void Highlight(class APawn* Pawn, bool* Highlighted);
	void TestUsability(class APawn* Pawn, bool* Usable);
	void CancelInteraction(class APawn* UsingPawn, bool* Cancelled);
	void OnStopInteraction(bool Success, class APawn* UsingPawn, bool InteractionStillInProgress);
	void OnStartInteraction(class APawn* UsingPawn);
	void SetInteractionAvailabilty(bool Active_, bool* Active);
	void ExecutePayload(class APawn* SuccessfulInteractor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
