// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_weapon_ihammer_ammo_shot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.Get_Casing_Boosted_Glow_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UW_weapon_ihammer_ammo_shot_C::Get_Casing_Boosted_Glow_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.Get_Casing_Boosted_Glow_ColorAndOpacity_1");

	UW_weapon_ihammer_ammo_shot_C_Get_Casing_Boosted_Glow_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.Set State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_ammo_states>   Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_weapon_ihammer_ammo_shot_C::Set_State(TEnumAsByte<Eui_ammo_states> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.Set State");

	UW_weapon_ihammer_ammo_shot_C_Set_State_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.ExecuteUbergraph_W_weapon_ihammer_ammo_shot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_weapon_ihammer_ammo_shot_C::ExecuteUbergraph_W_weapon_ihammer_ammo_shot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.ExecuteUbergraph_W_weapon_ihammer_ammo_shot");

	UW_weapon_ihammer_ammo_shot_C_ExecuteUbergraph_W_weapon_ihammer_ammo_shot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
