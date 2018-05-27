#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interaction_callout_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass interaction_callout_interface.interaction_callout_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uinteraction_callout_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass interaction_callout_interface.interaction_callout_interface_C");
		return ptr;
	}


	void CancelFill(class APawn* UsingPawn);
	void StartFill(class APawn* UsingPawn, float Duration);
	void UnhighlightInteraction();
	void HighlightInteraction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
