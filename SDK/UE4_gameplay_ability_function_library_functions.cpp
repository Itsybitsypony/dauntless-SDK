// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_ability_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function gameplay_ability_function_library.gameplay_ability_function_library_C.GetCurrentWeaponPowerData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WeaponOwner                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponPowerTableData   Row                            (Parm, OutParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugameplay_ability_function_library_C::STATIC_GetCurrentWeaponPowerData(class AActor* WeaponOwner, class UObject* __WorldContext, struct FWeaponPowerTableData* Row, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_ability_function_library.gameplay_ability_function_library_C.GetCurrentWeaponPowerData");

	Ugameplay_ability_function_library_C_GetCurrentWeaponPowerData_Params params;
	params.WeaponOwner = WeaponOwner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Row != nullptr)
		*Row = params.Row;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function gameplay_ability_function_library.gameplay_ability_function_library_C.GetCharacterOwner
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameplayAbility*        Ability                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AArchonCharacter*        Character_Owner                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugameplay_ability_function_library_C::STATIC_GetCharacterOwner(class UGameplayAbility* Ability, class UObject* __WorldContext, bool* Succeeded, class AArchonCharacter** Character_Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_ability_function_library.gameplay_ability_function_library_C.GetCharacterOwner");

	Ugameplay_ability_function_library_C_GetCharacterOwner_Params params;
	params.Ability = Ability;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (Character_Owner != nullptr)
		*Character_Owner = params.Character_Owner;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
