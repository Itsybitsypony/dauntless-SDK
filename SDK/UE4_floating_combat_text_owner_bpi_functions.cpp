// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_floating_combat_text_owner_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function floating_combat_text_owner_bpi.floating_combat_text_owner_bpi_C.TryAndDestroyWidgetComponentForFCT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponentReference       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_owner_bpi_C::TryAndDestroyWidgetComponentForFCT(class UWidgetComponent* WidgetComponentReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_owner_bpi.floating_combat_text_owner_bpi_C.TryAndDestroyWidgetComponentForFCT");

	Ufloating_combat_text_owner_bpi_C_TryAndDestroyWidgetComponentForFCT_Params params;
	params.WidgetComponentReference = WidgetComponentReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_owner_bpi.floating_combat_text_owner_bpi_C.SpawnWidgetComponentForFCT
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_owner_bpi_C::SpawnWidgetComponentForFCT(class UWidgetComponent** WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_owner_bpi.floating_combat_text_owner_bpi_C.SpawnWidgetComponentForFCT");

	Ufloating_combat_text_owner_bpi_C_SpawnWidgetComponentForFCT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetComponent != nullptr)
		*WidgetComponent = params.WidgetComponent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
