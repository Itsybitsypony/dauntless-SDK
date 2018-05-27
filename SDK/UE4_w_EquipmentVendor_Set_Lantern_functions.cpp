// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentVendor_Set_Lantern_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Get Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Lantern_C::Get_Item(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Get Item");

	Uw_EquipmentVendor_Set_Lantern_C_Get_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Refresh Lantern Items
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentVendor_Set_Lantern_C::Refresh_Lantern_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Refresh Lantern Items");

	Uw_EquipmentVendor_Set_Lantern_C_Refresh_Lantern_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Get Archon Catalog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonCatalog*          Catalog                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Lantern_C::Get_Archon_Catalog(class UArchonCatalog** Catalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Get Archon Catalog");

	Uw_EquipmentVendor_Set_Lantern_C_Get_Archon_Catalog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Catalog != nullptr)
		*Catalog = params.Catalog;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_EquipmentVendor_Set_Lantern_C::Set_Name(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Set Name");

	Uw_EquipmentVendor_Set_Lantern_C_Set_Name_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Set Items
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UEquipmentItem*>  Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_EquipmentVendor_Set_Lantern_C::Set_Items(TArray<class UEquipmentItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Set Items");

	Uw_EquipmentVendor_Set_Lantern_C_Set_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Lantern_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Tick");

	Uw_EquipmentVendor_Set_Lantern_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Focus Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Lantern_C::Focus_Item(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Focus Item");

	Uw_EquipmentVendor_Set_Lantern_C_Focus_Item_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EquipmentVendor_Set_Lantern_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Construct");

	Uw_EquipmentVendor_Set_Lantern_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.ExecuteUbergraph_w_EquipmentVendor_Set_Lantern
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Lantern_C::ExecuteUbergraph_w_EquipmentVendor_Set_Lantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.ExecuteUbergraph_w_EquipmentVendor_Set_Lantern");

	Uw_EquipmentVendor_Set_Lantern_C_ExecuteUbergraph_w_EquipmentVendor_Set_Lantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
