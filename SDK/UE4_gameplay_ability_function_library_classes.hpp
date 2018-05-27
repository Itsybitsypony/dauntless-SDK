#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_ability_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gameplay_ability_function_library.gameplay_ability_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Ugameplay_ability_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gameplay_ability_function_library.gameplay_ability_function_library_C");
		return ptr;
	}


	void STATIC_GetCurrentWeaponPowerData(class AActor* WeaponOwner, class UObject* __WorldContext, struct FWeaponPowerTableData* Row, bool* Success);
	void STATIC_GetCharacterOwner(class UGameplayAbility* Ability, class UObject* __WorldContext, bool* Succeeded, class AArchonCharacter** Character_Owner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
