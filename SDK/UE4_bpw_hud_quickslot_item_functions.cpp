// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_quickslot_item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_hud_quickslot_item_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetText_1");

	Ubpw_hud_quickslot_item_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetRemainingUses
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RemainingUses                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_item_C::GetRemainingUses(int* RemainingUses)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetRemainingUses");

	Ubpw_hud_quickslot_item_C_GetRemainingUses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingUses != nullptr)
		*RemainingUses = params.RemainingUses;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_TextBlock_Amount_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_hud_quickslot_item_C::Get_TextBlock_Amount_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_TextBlock_Amount_Visibility_1");

	Ubpw_hud_quickslot_item_C_Get_TextBlock_Amount_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get Icon Visibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_hud_quickslot_item_C::Get_Icon_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get Icon Visibility");

	Ubpw_hud_quickslot_item_C_Get_Icon_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_item_C::SetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.SetIcon");

	Ubpw_hud_quickslot_item_C_SetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_QuickItem* FoundItem                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_item_C::GetItem(class UArchonInventoryItem_QuickItem** FoundItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetItem");

	Ubpw_hud_quickslot_item_C_GetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundItem != nullptr)
		*FoundItem = params.FoundItem;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_ProgressBar_Icon_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Ubpw_hud_quickslot_item_C::Get_ProgressBar_Icon_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_ProgressBar_Icon_Percent_1");

	Ubpw_hud_quickslot_item_C_Get_ProgressBar_Icon_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_TextBlock_Amount_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_hud_quickslot_item_C::Get_TextBlock_Amount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_TextBlock_Amount_Text_1");

	Ubpw_hud_quickslot_item_C_Get_TextBlock_Amount_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.hide
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_item_C::hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.hide");

	Ubpw_hud_quickslot_item_C_hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.OnLoaded_DB9D936A4AB5C6EB912797AF4EC44451
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_item_C::OnLoaded_DB9D936A4AB5C6EB912797AF4EC44451(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.OnLoaded_DB9D936A4AB5C6EB912797AF4EC44451");

	Ubpw_hud_quickslot_item_C_OnLoaded_DB9D936A4AB5C6EB912797AF4EC44451_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_hud_quickslot_item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Construct");

	Ubpw_hud_quickslot_item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_item_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Tick");

	Ubpw_hud_quickslot_item_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Update From Loadout
// (BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_item_C::Update_From_Loadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Update From Loadout");

	Ubpw_hud_quickslot_item_C_Update_From_Loadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.UpdateItem
// (BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_item_C::UpdateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.UpdateItem");

	Ubpw_hud_quickslot_item_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Loadout_UpdateIcon_ByID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_hud_quickslot_item_C::Loadout_UpdateIcon_ByID(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Loadout_UpdateIcon_ByID");

	Ubpw_hud_quickslot_item_C_Loadout_UpdateIcon_ByID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Loadout_UpdateIcon_ByID_WithCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            AmoutRemaining                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_item_C::Loadout_UpdateIcon_ByID_WithCount(const class FString& ItemID, int AmoutRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Loadout_UpdateIcon_ByID_WithCount");

	Ubpw_hud_quickslot_item_C_Loadout_UpdateIcon_ByID_WithCount_Params params;
	params.ItemID = ItemID;
	params.AmoutRemaining = AmoutRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Update Quick Item ID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            AmountRemaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_item_C::Update_Quick_Item_ID(const class FString& ItemID, int AmountRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Update Quick Item ID");

	Ubpw_hud_quickslot_item_C_Update_Quick_Item_ID_Params params;
	params.ItemID = ItemID;
	params.AmountRemaining = AmountRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Load Item Icon
// (BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_item_C::Load_Item_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Load Item Icon");

	Ubpw_hud_quickslot_item_C_Load_Item_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Clear Item Icon
// (BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_item_C::Clear_Item_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Clear Item Icon");

	Ubpw_hud_quickslot_item_C_Clear_Item_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.ExecuteUbergraph_bpw_hud_quickslot_item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_item_C::ExecuteUbergraph_bpw_hud_quickslot_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.ExecuteUbergraph_bpw_hud_quickslot_item");

	Ubpw_hud_quickslot_item_C_ExecuteUbergraph_bpw_hud_quickslot_item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
