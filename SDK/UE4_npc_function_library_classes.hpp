#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass npc_function_library.npc_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Unpc_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npc_function_library.npc_function_library_C");
		return ptr;
	}


	void STATIC_SetAllPlayersVisibility(bool Visible, class UObject* __WorldContext);
	void STATIC_DoesPlayerMeetRequirement(class APlayerController* PlayerController, const struct Fplayercontroller_requirements& Requirement, const TScriptInterface<class Uinteractable_npc_interface_C>& Vendor, const struct FText& NoValidConditionsFoundText, class UObject* __WorldContext, bool* MeetsRequirement, struct FText* FailureReason);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
