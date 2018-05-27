// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_emotes_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function style_emotes_bpw.style_emotes_bpw_C.FindGridItemWithItemId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class Uw_catalog_GridItem_C*   GridItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::FindGridItemWithItemId(const class FString& ItemID, class Uw_catalog_GridItem_C** GridItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.FindGridItemWithItemId");

	Ustyle_emotes_bpw_C_FindGridItemWithItemId_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GridItem != nullptr)
		*GridItem = params.GridItem;
}


// Function style_emotes_bpw.style_emotes_bpw_C.CanEquipToWheel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ustyle_emotes_bpw_C::CanEquipToWheel(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.CanEquipToWheel");

	Ustyle_emotes_bpw_C_CanEquipToWheel_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_emotes_bpw.style_emotes_bpw_C.IsEmoteEquipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ustyle_emotes_bpw_C::IsEmoteEquipped(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.IsEmoteEquipped");

	Ustyle_emotes_bpw_C_IsEmoteEquipped_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Get_CallToAction_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ustyle_emotes_bpw_C::Get_CallToAction_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Get_CallToAction_Text");

	Ustyle_emotes_bpw_C_Get_CallToAction_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_emotes_bpw.style_emotes_bpw_C.FilterEmotes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEmoteType                     EmoteType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::FilterEmotes(EEmoteType EmoteType)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.FilterEmotes");

	Ustyle_emotes_bpw_C_FilterEmotes_Params params;
	params.EmoteType = EmoteType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.GetVisibility_gamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ustyle_emotes_bpw_C::GetVisibility_gamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.GetVisibility_gamepad");

	Ustyle_emotes_bpw_C_GetVisibility_gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_emotes_bpw.style_emotes_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ustyle_emotes_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.OnKeyDown");

	Ustyle_emotes_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_emotes_bpw.style_emotes_bpw_C.FilterEmoteList_toType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEmoteType                     EmoteType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FArchonCatalogItem> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ustyle_emotes_bpw_C::FilterEmoteList_toType(EEmoteType EmoteType, TArray<struct FArchonCatalogItem>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.FilterEmoteList_toType");

	Ustyle_emotes_bpw_C_FilterEmoteList_toType_Params params;
	params.EmoteType = EmoteType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function style_emotes_bpw.style_emotes_bpw_C.UpdateEmoteGrid_UI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEmoteType                     Emote_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::UpdateEmoteGrid_UI(EEmoteType Emote_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.UpdateEmoteGrid_UI");

	Ustyle_emotes_bpw_C_UpdateEmoteGrid_UI_Params params;
	params.Emote_Type = Emote_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Gamepad Back
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::Gamepad_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Gamepad Back");

	Ustyle_emotes_bpw_C_Gamepad_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Map Active Emote to Wheel
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::Map_Active_Emote_to_Wheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Map Active Emote to Wheel");

	Ustyle_emotes_bpw_C_Map_Active_Emote_to_Wheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.RefreshEquipped
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::RefreshEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.RefreshEquipped");

	Ustyle_emotes_bpw_C_RefreshEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::Input_Swap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Input Swap");

	Ustyle_emotes_bpw_C_Input_Swap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.BndEvt__w_emotewheel_bpw_K2Node_ComponentBoundEvent_1199_CloseWheel__DelegateSignature
// (BlueprintEvent)

void Ustyle_emotes_bpw_C::BndEvt__w_emotewheel_bpw_K2Node_ComponentBoundEvent_1199_CloseWheel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.BndEvt__w_emotewheel_bpw_K2Node_ComponentBoundEvent_1199_CloseWheel__DelegateSignature");

	Ustyle_emotes_bpw_C_BndEvt__w_emotewheel_bpw_K2Node_ComponentBoundEvent_1199_CloseWheel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Refresh");

	Ustyle_emotes_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.OnIntroEmoteAssigned
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::OnIntroEmoteAssigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.OnIntroEmoteAssigned");

	Ustyle_emotes_bpw_C_OnIntroEmoteAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Bind Events to Emote Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_catalog_GridItem_C*   Grid_Item                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::Bind_Events_to_Emote_Item(class Uw_catalog_GridItem_C* Grid_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Bind Events to Emote Item");

	Ustyle_emotes_bpw_C_Bind_Events_to_Emote_Item_Params params;
	params.Grid_Item = Grid_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Equip Hunt Arrival
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_emotes_bpw_C::Equip_Hunt_Arrival(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Equip Hunt Arrival");

	Ustyle_emotes_bpw_C_Equip_Hunt_Arrival_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Manual Emotes Updated
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::Manual_Emotes_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Manual Emotes Updated");

	Ustyle_emotes_bpw_C_Manual_Emotes_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.OnManualEmotesAssigned
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::OnManualEmotesAssigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.OnManualEmotesAssigned");

	Ustyle_emotes_bpw_C_OnManualEmotesAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ustyle_emotes_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	Ustyle_emotes_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Bind to Manual Emotes Updated
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::Bind_to_Manual_Emotes_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Bind to Manual Emotes Updated");

	Ustyle_emotes_bpw_C_Bind_to_Manual_Emotes_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.EmoteSelected_Equip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnsItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::EmoteSelected_Equip(const class FString& InstanceId, const class FString& ItemID, int Index, bool OwnsItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.EmoteSelected_Equip");

	Ustyle_emotes_bpw_C_EmoteSelected_Equip_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.OwnsItem = OwnsItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Refresh Button Legend
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::Refresh_Button_Legend()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Refresh Button Legend");

	Ustyle_emotes_bpw_C_Refresh_Button_Legend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Set New Active ItemID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ActiveItemID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_emotes_bpw_C::Set_New_Active_ItemID(const class FString& ActiveItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Set New Active ItemID");

	Ustyle_emotes_bpw_C_Set_New_Active_ItemID_Params params;
	params.ActiveItemID = ActiveItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.EmoteSelected_Preview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GridIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Owns                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::EmoteSelected_Preview(const class FString& ItemInstance, const class FString& ItemID, int GridIndex, bool Owns)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.EmoteSelected_Preview");

	Ustyle_emotes_bpw_C_EmoteSelected_Preview_Params params;
	params.ItemInstance = ItemInstance;
	params.ItemID = ItemID;
	params.GridIndex = GridIndex;
	params.Owns = Owns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ustyle_emotes_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.Construct");

	Ustyle_emotes_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.EmoteFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::EmoteFocused(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.EmoteFocused");

	Ustyle_emotes_bpw_C_EmoteFocused_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.EmoteUnfocused
// (BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::EmoteUnfocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.EmoteUnfocused");

	Ustyle_emotes_bpw_C_EmoteUnfocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.ExecuteUbergraph_style_emotes_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::ExecuteUbergraph_style_emotes_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.ExecuteUbergraph_style_emotes_bpw");

	Ustyle_emotes_bpw_C_ExecuteUbergraph_style_emotes_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.PlayArrivalEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ArrivalEmote                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_emotes_bpw_C::PlayArrivalEmote__DelegateSignature(const class FString& ArrivalEmote)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.PlayArrivalEmote__DelegateSignature");

	Ustyle_emotes_bpw_C_PlayArrivalEmote__DelegateSignature_Params params;
	params.ArrivalEmote = ArrivalEmote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.EmoteMenu_ScreenModeChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_emotes_bpw_C::EmoteMenu_ScreenModeChange__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.EmoteMenu_ScreenModeChange__DelegateSignature");

	Ustyle_emotes_bpw_C_EmoteMenu_ScreenModeChange__DelegateSignature_Params params;
	params.Screen_Mode = Screen_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.ResetEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ustyle_emotes_bpw_C::ResetEmote__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.ResetEmote__DelegateSignature");

	Ustyle_emotes_bpw_C_ResetEmote__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_emotes_bpw.style_emotes_bpw_C.PlayEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  emoteID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_emotes_bpw_C::PlayEmote__DelegateSignature(const class FString& emoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_emotes_bpw.style_emotes_bpw_C.PlayEmote__DelegateSignature");

	Ustyle_emotes_bpw_C_PlayEmote__DelegateSignature_Params params;
	params.emoteID = emoteID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
