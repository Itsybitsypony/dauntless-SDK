// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentDetail_RequiredItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EquipmentDetail_RequiredItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.Construct");

	Uw_EquipmentDetail_RequiredItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.Refresh Item
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_RequiredItem_C::Refresh_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.Refresh Item");

	Uw_EquipmentDetail_RequiredItem_C_Refresh_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EquipmentDetail_RequiredItem_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.OnSynchronizeProperties");

	Uw_EquipmentDetail_RequiredItem_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.ExecuteUbergraph_w_EquipmentDetail_RequiredItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_RequiredItem_C::ExecuteUbergraph_w_EquipmentDetail_RequiredItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_RequiredItem.w_EquipmentDetail_RequiredItem_C.ExecuteUbergraph_w_EquipmentDetail_RequiredItem");

	Uw_EquipmentDetail_RequiredItem_C_ExecuteUbergraph_w_EquipmentDetail_RequiredItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
