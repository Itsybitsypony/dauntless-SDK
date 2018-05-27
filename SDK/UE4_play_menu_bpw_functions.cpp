// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_menu_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function play_menu_bpw.play_menu_bpw_C.RefreshUnableToQueuePanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::RefreshUnableToQueuePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.RefreshUnableToQueuePanel");

	Uplay_menu_bpw_C_RefreshUnableToQueuePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.InitNormalHeroicSelector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::InitNormalHeroicSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.InitNormalHeroicSelector");

	Uplay_menu_bpw_C_InitNormalHeroicSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.HandleTabSwitching
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent               KeyEvent                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             Reply                          (Parm, OutParm)

void Uplay_menu_bpw_C::HandleTabSwitching(const struct FKeyEvent& KeyEvent, bool* Handled, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.HandleTabSwitching");

	Uplay_menu_bpw_C_HandleTabSwitching_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
	if (Reply != nullptr)
		*Reply = params.Reply;
}


// Function play_menu_bpw.play_menu_bpw_C.On_PrimaryChoicePanel_Right_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uplay_menu_bpw_C::On_PrimaryChoicePanel_Right_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.On_PrimaryChoicePanel_Right_1");

	Uplay_menu_bpw_C_On_PrimaryChoicePanel_Right_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function play_menu_bpw.play_menu_bpw_C.On_PlayPanel_Up_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uplay_menu_bpw_C::On_PlayPanel_Up_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.On_PlayPanel_Up_1");

	Uplay_menu_bpw_C_On_PlayPanel_Up_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function play_menu_bpw.play_menu_bpw_C.On_SecondaryChoicePanel_Left_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uplay_menu_bpw_C::On_SecondaryChoicePanel_Left_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.On_SecondaryChoicePanel_Left_1");

	Uplay_menu_bpw_C_On_SecondaryChoicePanel_Left_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function play_menu_bpw.play_menu_bpw_C.OnLostFocusSecondaryPlayMenuEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Lost_Focus_Entry               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::OnLostFocusSecondaryPlayMenuEntry(class Uw_play_menu_entry_base_bpw_C* Lost_Focus_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnLostFocusSecondaryPlayMenuEntry");

	Uplay_menu_bpw_C_OnLostFocusSecondaryPlayMenuEntry_Params params;
	params.Lost_Focus_Entry = Lost_Focus_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnLostFocusPrimaryPlayMenuEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Lost_Focus_Entry               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::OnLostFocusPrimaryPlayMenuEntry(class Uw_play_menu_entry_base_bpw_C* Lost_Focus_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnLostFocusPrimaryPlayMenuEntry");

	Uplay_menu_bpw_C_OnLostFocusPrimaryPlayMenuEntry_Params params;
	params.Lost_Focus_Entry = Lost_Focus_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.SetupActivityEntries
// (Public, BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::SetupActivityEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.SetupActivityEntries");

	Uplay_menu_bpw_C_SetupActivityEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnFocusSecondaryPlayMenuEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Focused_Entry                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::OnFocusSecondaryPlayMenuEntry(class Uw_play_menu_entry_base_bpw_C* Focused_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnFocusSecondaryPlayMenuEntry");

	Uplay_menu_bpw_C_OnFocusSecondaryPlayMenuEntry_Params params;
	params.Focused_Entry = Focused_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnFocusPrimaryPlayMenuEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Focused_Entry                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::OnFocusPrimaryPlayMenuEntry(class Uw_play_menu_entry_base_bpw_C* Focused_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnFocusPrimaryPlayMenuEntry");

	Uplay_menu_bpw_C_OnFocusPrimaryPlayMenuEntry_Params params;
	params.Focused_Entry = Focused_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.ShowDetailPanelForPlayMenuEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::ShowDetailPanelForPlayMenuEntry(class Uw_play_menu_entry_base_bpw_C* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.ShowDetailPanelForPlayMenuEntry");

	Uplay_menu_bpw_C_ShowDetailPanelForPlayMenuEntry_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.ShowSecondaryPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           HuntIds                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class Uw_play_menu_entry_base_bpw_C* Primary_Entry                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::ShowSecondaryPanel(const struct FText& Title, class Uw_play_menu_entry_base_bpw_C* Primary_Entry, TArray<struct FName>* HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.ShowSecondaryPanel");

	Uplay_menu_bpw_C_ShowSecondaryPanel_Params params;
	params.Title = Title;
	params.Primary_Entry = Primary_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntIds != nullptr)
		*HuntIds = params.HuntIds;
}


// Function play_menu_bpw.play_menu_bpw_C.NavigateBack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uplay_menu_bpw_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.NavigateBack");

	Uplay_menu_bpw_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function play_menu_bpw.play_menu_bpw_C.SelectSecondaryPlayMenuEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* EntryToSelect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelectedFromFocus              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelectionChanged               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::SelectSecondaryPlayMenuEntry(class Uw_play_menu_entry_base_bpw_C* EntryToSelect, bool SelectedFromFocus, bool* SelectionChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.SelectSecondaryPlayMenuEntry");

	Uplay_menu_bpw_C_SelectSecondaryPlayMenuEntry_Params params;
	params.EntryToSelect = EntryToSelect;
	params.SelectedFromFocus = SelectedFromFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectionChanged != nullptr)
		*SelectionChanged = params.SelectionChanged;
}


// Function play_menu_bpw.play_menu_bpw_C.SelectPrimaryPlayMenuEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* EntryToSelect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelectedFromFocus              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelectionChanged               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::SelectPrimaryPlayMenuEntry(class Uw_play_menu_entry_base_bpw_C* EntryToSelect, bool SelectedFromFocus, bool* SelectionChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.SelectPrimaryPlayMenuEntry");

	Uplay_menu_bpw_C_SelectPrimaryPlayMenuEntry_Params params;
	params.EntryToSelect = EntryToSelect;
	params.SelectedFromFocus = SelectedFromFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectionChanged != nullptr)
		*SelectionChanged = params.SelectionChanged;
}


// Function play_menu_bpw.play_menu_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uplay_menu_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnKeyDown");

	Uplay_menu_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function play_menu_bpw.play_menu_bpw_C.QueueForSelectedHunt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPrivateHunt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::QueueForSelectedHunt(bool IsPrivateHunt)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.QueueForSelectedHunt");

	Uplay_menu_bpw_C_QueueForSelectedHunt_Params params;
	params.IsPrivateHunt = IsPrivateHunt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uplay_menu_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.GetDefaultFocusedWidget");

	Uplay_menu_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function play_menu_bpw.play_menu_bpw_C.RefreshHuntIDBuckets
// (Public, BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::RefreshHuntIDBuckets()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.RefreshHuntIDBuckets");

	Uplay_menu_bpw_C_RefreshHuntIDBuckets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.RefreshPrimaryPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HeroicMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::RefreshPrimaryPanel(bool HeroicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.RefreshPrimaryPanel");

	Uplay_menu_bpw_C_RefreshPrimaryPanel_Params params;
	params.HeroicMode = HeroicMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uplay_menu_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.Construct");

	Uplay_menu_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.Close
// (BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.Close");

	Uplay_menu_bpw_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnPrimaryPlayMenuListEntrySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Selected_Entry                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::OnPrimaryPlayMenuListEntrySelected(class Uw_play_menu_entry_base_bpw_C* Selected_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnPrimaryPlayMenuListEntrySelected");

	Uplay_menu_bpw_C_OnPrimaryPlayMenuListEntrySelected_Params params;
	params.Selected_Entry = Selected_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnSecondaryPlayMenuEntrySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Selected_Entry                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::OnSecondaryPlayMenuEntrySelected(class Uw_play_menu_entry_base_bpw_C* Selected_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnSecondaryPlayMenuEntrySelected");

	Uplay_menu_bpw_C_OnSecondaryPlayMenuEntrySelected_Params params;
	params.Selected_Entry = Selected_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::InputSwap(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.InputSwap");

	Uplay_menu_bpw_C_InputSwap_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_StartHunt_K2Node_ComponentBoundEvent_238_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::BndEvt__Button_StartHunt_K2Node_ComponentBoundEvent_238_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_StartHunt_K2Node_ComponentBoundEvent_238_OnArchonUserButtonAction__DelegateSignature");

	Uplay_menu_bpw_C_BndEvt__Button_StartHunt_K2Node_ComponentBoundEvent_238_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_PrivateHunt_K2Node_ComponentBoundEvent_280_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::BndEvt__Button_PrivateHunt_K2Node_ComponentBoundEvent_280_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_PrivateHunt_K2Node_ComponentBoundEvent_280_OnArchonUserButtonAction__DelegateSignature");

	Uplay_menu_bpw_C_BndEvt__Button_PrivateHunt_K2Node_ComponentBoundEvent_280_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_NormalMode_K2Node_ComponentBoundEvent_170_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::BndEvt__Button_NormalMode_K2Node_ComponentBoundEvent_170_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_NormalMode_K2Node_ComponentBoundEvent_170_OnArchonUserButtonAction__DelegateSignature");

	Uplay_menu_bpw_C_BndEvt__Button_NormalMode_K2Node_ComponentBoundEvent_170_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_HeroicMode_K2Node_ComponentBoundEvent_187_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::BndEvt__Button_HeroicMode_K2Node_ComponentBoundEvent_187_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_HeroicMode_K2Node_ComponentBoundEvent_187_OnArchonUserButtonAction__DelegateSignature");

	Uplay_menu_bpw_C_BndEvt__Button_HeroicMode_K2Node_ComponentBoundEvent_187_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnNavigateToNormalMode
// (BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::OnNavigateToNormalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnNavigateToNormalMode");

	Uplay_menu_bpw_C_OnNavigateToNormalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnNavigateToHeroicMode
// (BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::OnNavigateToHeroicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnNavigateToHeroicMode");

	Uplay_menu_bpw_C_OnNavigateToHeroicMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.TryPlayRevealIslandSequence
// (BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::TryPlayRevealIslandSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.TryPlayRevealIslandSequence");

	Uplay_menu_bpw_C_TryPlayRevealIslandSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonParty            Party                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uplay_menu_bpw_C::OnPartyUpdated(const struct FArchonParty& Party)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnPartyUpdated");

	Uplay_menu_bpw_C_OnPartyUpdated_Params params;
	params.Party = Party;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.ExecuteUbergraph_play_menu_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_menu_bpw_C::ExecuteUbergraph_play_menu_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.ExecuteUbergraph_play_menu_bpw");

	Uplay_menu_bpw_C_ExecuteUbergraph_play_menu_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_menu_bpw.play_menu_bpw_C.OnHuntSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplay_menu_bpw_C::OnHuntSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function play_menu_bpw.play_menu_bpw_C.OnHuntSelected__DelegateSignature");

	Uplay_menu_bpw_C_OnHuntSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
