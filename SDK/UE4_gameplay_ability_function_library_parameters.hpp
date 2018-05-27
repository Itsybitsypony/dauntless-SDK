#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_ability_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function gameplay_ability_function_library.gameplay_ability_function_library_C.GetCurrentWeaponPowerData
struct Ugameplay_ability_function_library_C_GetCurrentWeaponPowerData_Params
{
	class AActor*                                      WeaponOwner;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponPowerTableData                       Row;                                                      // (Parm, OutParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function gameplay_ability_function_library.gameplay_ability_function_library_C.GetCharacterOwner
struct Ugameplay_ability_function_library_C_GetCharacterOwner_Params
{
	class UGameplayAbility*                            Ability;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AArchonCharacter*                            Character_Owner;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
