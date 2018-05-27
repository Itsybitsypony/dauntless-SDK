#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_InteractionActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_InteractionActor.BPI_InteractionActor_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_InteractionActor_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InteractionActor.BPI_InteractionActor_C");
		return ptr;
	}


	void SetInteractionAvailability(bool Active, bool* Out);
	void CanUserStartInteraction_(class UArchonInteractionUserComponent* User, bool* CanUse);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
