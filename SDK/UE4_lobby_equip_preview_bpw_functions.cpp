// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_equip_preview_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ulobby_equip_preview_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.OnKeyDown");

	Ulobby_equip_preview_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Get Quick Item Details
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulobby_equip_preview_bpw_C::Get_Quick_Item_Details(int SlotIndex, class FString* ItemID, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Get Quick Item Details");

	Ulobby_equip_preview_bpw_C_Get_Quick_Item_Details_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (Count != nullptr)
		*Count = params.Count;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Update Lobby Quick Item Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_hud_quickslot_item_C* QuickitemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_equip_preview_bpw_C::Update_Lobby_Quick_Item_Slot(class Ubpw_hud_quickslot_item_C* QuickitemWidget, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Update Lobby Quick Item Slot");

	Ulobby_equip_preview_bpw_C_Update_Lobby_Quick_Item_Slot_Params params;
	params.QuickitemWidget = QuickitemWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.SetupExamineItems
// (Public, BlueprintCallable, BlueprintEvent)

void Ulobby_equip_preview_bpw_C::SetupExamineItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.SetupExamineItems");

	Ulobby_equip_preview_bpw_C_SetupExamineItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_equip_preview_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.GetDefaultFocusedWidget");

	Ulobby_equip_preview_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ulobby_equip_preview_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Construct");

	Ulobby_equip_preview_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Close Screen
// (BlueprintCallable, BlueprintEvent)

void Ulobby_equip_preview_bpw_C::Close_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Close Screen");

	Ulobby_equip_preview_bpw_C_Close_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_equip_preview_bpw_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.OnAnimationFinished");

	Ulobby_equip_preview_bpw_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ShowTooltipForSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_equip_preview_bpw_C::ShowTooltipForSlot(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ShowTooltipForSlot");

	Ulobby_equip_preview_bpw_C_ShowTooltipForSlot_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ClearTooltipForSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_equip_preview_bpw_C::ClearTooltipForSlot(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ClearTooltipForSlot");

	Ulobby_equip_preview_bpw_C_ClearTooltipForSlot_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ExecuteUbergraph_lobby_equip_preview_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_equip_preview_bpw_C::ExecuteUbergraph_lobby_equip_preview_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ExecuteUbergraph_lobby_equip_preview_bpw");

	Ulobby_equip_preview_bpw_C_ExecuteUbergraph_lobby_equip_preview_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.EquipPreviewClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ulobby_equip_preview_bpw_C::EquipPreviewClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.EquipPreviewClosed__DelegateSignature");

	Ulobby_equip_preview_bpw_C_EquipPreviewClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
