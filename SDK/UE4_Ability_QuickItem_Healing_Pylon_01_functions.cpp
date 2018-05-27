// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Pylon_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.PylonTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                PylonLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UAbility_QuickItem_Healing_Pylon_01_C::PylonTick(struct FVector* PylonLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.PylonTick");

	UAbility_QuickItem_Healing_Pylon_01_C_PylonTick_Params params;
	params.PylonLocation = PylonLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.HealVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  VFXTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Pylon_01_C::HealVFX(class AActor* VFXTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.HealVFX");

	UAbility_QuickItem_Healing_Pylon_01_C_HealVFX_Params params;
	params.VFXTarget = VFXTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.ExecuteUbergraph_Ability_QuickItem_Healing_Pylon_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Pylon_01_C::ExecuteUbergraph_Ability_QuickItem_Healing_Pylon_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.ExecuteUbergraph_Ability_QuickItem_Healing_Pylon_01");

	UAbility_QuickItem_Healing_Pylon_01_C_ExecuteUbergraph_Ability_QuickItem_Healing_Pylon_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
