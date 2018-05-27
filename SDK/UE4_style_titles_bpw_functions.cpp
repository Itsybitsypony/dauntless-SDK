// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_titles_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function style_titles_bpw.style_titles_bpw_C.CollectTitlesFromInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_titles_bpw_C::CollectTitlesFromInventory(class UArchonInventoryItem* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_titles_bpw.style_titles_bpw_C.CollectTitlesFromInventory");

	Ustyle_titles_bpw_C_CollectTitlesFromInventory_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_titles_bpw.style_titles_bpw_C.AddOwnedTitlesToScrollbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ustyle_titles_bpw_C::AddOwnedTitlesToScrollbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_titles_bpw.style_titles_bpw_C.AddOwnedTitlesToScrollbox");

	Ustyle_titles_bpw_C_AddOwnedTitlesToScrollbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_titles_bpw.style_titles_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ustyle_titles_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_titles_bpw.style_titles_bpw_C.Construct");

	Ustyle_titles_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_titles_bpw.style_titles_bpw_C.Equip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_titles_bpw_C::Equip(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_titles_bpw.style_titles_bpw_C.Equip");

	Ustyle_titles_bpw_C_Equip_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_titles_bpw.style_titles_bpw_C.ExecuteUbergraph_style_titles_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_titles_bpw_C::ExecuteUbergraph_style_titles_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_titles_bpw.style_titles_bpw_C.ExecuteUbergraph_style_titles_bpw");

	Ustyle_titles_bpw_C_ExecuteUbergraph_style_titles_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_titles_bpw.style_titles_bpw_C.UpdateTitleDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_titles_bpw_C::UpdateTitleDisplay__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_titles_bpw.style_titles_bpw_C.UpdateTitleDisplay__DelegateSignature");

	Ustyle_titles_bpw_C_UpdateTitleDisplay__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
