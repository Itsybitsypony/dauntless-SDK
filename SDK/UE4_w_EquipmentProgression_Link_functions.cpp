// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentProgression_Link_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentProgression_Link.w_EquipmentProgression_Link_C.Set Bottom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressionLink>  New_Link                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Link_C::Set_Bottom(TEnumAsByte<EProgressionLink> New_Link)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Link.w_EquipmentProgression_Link_C.Set Bottom");

	Uw_EquipmentProgression_Link_C_Set_Bottom_Params params;
	params.New_Link = New_Link;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Link.w_EquipmentProgression_Link_C.Set Top
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressionLink>  New_Link                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Link_C::Set_Top(TEnumAsByte<EProgressionLink> New_Link)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Link.w_EquipmentProgression_Link_C.Set Top");

	Uw_EquipmentProgression_Link_C_Set_Top_Params params;
	params.New_Link = New_Link;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
