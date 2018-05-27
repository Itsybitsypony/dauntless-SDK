// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugLoadoutScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableFlask
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::DisplayAvailableFlask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableFlask");

	UBPW_DebugLoadoutScreen_C_DisplayAvailableFlask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnFlaskSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnFlaskSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnFlaskSelectionChanged");

	UBPW_DebugLoadoutScreen_C_OnFlaskSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnBannerOptionChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::OnBannerOptionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnBannerOptionChanged");

	UBPW_DebugLoadoutScreen_C_OnBannerOptionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableBannerDyes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*         ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_DebugLoadoutScreen_C::DisplayAvailableBannerDyes(class UComboBoxString* ComboBox, const class FString& SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableBannerDyes");

	UBPW_DebugLoadoutScreen_C_DisplayAvailableBannerDyes_Params params;
	params.ComboBox = ComboBox;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableBannerOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*         ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 OptionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::DisplayAvailableBannerOptions(class UComboBoxString* ComboBox, EItemGroupType OptionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableBannerOptions");

	UBPW_DebugLoadoutScreen_C_DisplayAvailableBannerOptions_Params params;
	params.ComboBox = ComboBox;
	params.OptionType = OptionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteCustomChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnEmoteCustomChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteCustomChanged");

	UBPW_DebugLoadoutScreen_C_OnEmoteCustomChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteEndChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnEmoteEndChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteEndChanged");

	UBPW_DebugLoadoutScreen_C_OnEmoteEndChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteIntroChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnEmoteIntroChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteIntroChanged");

	UBPW_DebugLoadoutScreen_C_OnEmoteIntroChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableEmotes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*         ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EEmoteType                     EmoteType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CustomIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::DisplayAvailableEmotes(class UComboBoxString* ComboBox, EEmoteType EmoteType, int CustomIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableEmotes");

	UBPW_DebugLoadoutScreen_C_DisplayAvailableEmotes_Params params;
	params.ComboBox = ComboBox;
	params.EmoteType = EmoteType;
	params.CustomIndex = CustomIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateAllArmourStats
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::UpdateAllArmourStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateAllArmourStats");

	UBPW_DebugLoadoutScreen_C_UpdateAllArmourStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateArmourStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              ScrollBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem_Armour* InvItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::UpdateArmourStats(class UScrollBox* ScrollBox, class UArchonInventoryItem_Armour* InvItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateArmourStats");

	UBPW_DebugLoadoutScreen_C_UpdateArmourStats_Params params;
	params.ScrollBox = ScrollBox;
	params.InvItem = InvItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.AddArmourStat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TextValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPanelWidget*            Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::AddArmourStat(const class FString& TextValue, const struct FSlateColor& Color, class UPanelWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.AddArmourStat");

	UBPW_DebugLoadoutScreen_C_AddArmourStat_Params params;
	params.TextValue = TextValue;
	params.Color = Color;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateLanternStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::UpdateLanternStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateLanternStats");

	UBPW_DebugLoadoutScreen_C_UpdateLanternStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateSetBonuses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::UpdateSetBonuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateSetBonuses");

	UBPW_DebugLoadoutScreen_C_UpdateSetBonuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableLantern
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::DisplayAvailableLantern()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableLantern");

	UBPW_DebugLoadoutScreen_C_DisplayAvailableLantern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnLanternSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnLanternSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnLanternSelectionChanged");

	UBPW_DebugLoadoutScreen_C_OnLanternSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnLegsSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnLegsSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnLegsSelectionChanged");

	UBPW_DebugLoadoutScreen_C_OnLegsSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnArmsSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnArmsSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnArmsSelectionChanged");

	UBPW_DebugLoadoutScreen_C_OnArmsSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnChestSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnChestSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnChestSelectionChanged");

	UBPW_DebugLoadoutScreen_C_OnChestSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnHelmetSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnHelmetSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnHelmetSelectionChanged");

	UBPW_DebugLoadoutScreen_C_OnHelmetSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableArmour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UComboBoxString*         ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::DisplayAvailableArmour(EArmorType ArmourType, class UComboBoxString* ComboBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableArmour");

	UBPW_DebugLoadoutScreen_C_DisplayAvailableArmour_Params params;
	params.ArmourType = ArmourType;
	params.ComboBox = ComboBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnWeaponSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::OnWeaponSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnWeaponSelectionChanged");

	UBPW_DebugLoadoutScreen_C_OnWeaponSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::DisplayAvailableWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableWeapon");

	UBPW_DebugLoadoutScreen_C_DisplayAvailableWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.hide");

	UBPW_DebugLoadoutScreen_C_hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.Show");

	UBPW_DebugLoadoutScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.Construct");

	UBPW_DebugLoadoutScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_361_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_361_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_361_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_361_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DelayedUpdateSetBonuses
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::DelayedUpdateSetBonuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DelayedUpdateSetBonuses");

	UBPW_DebugLoadoutScreen_C_DelayedUpdateSetBonuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DelayedUpdateStats
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::DelayedUpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DelayedUpdateStats");

	UBPW_DebugLoadoutScreen_C_DelayedUpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot1_K2Node_ComponentBoundEvent_129_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_EmoteSlot1_K2Node_ComponentBoundEvent_129_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot1_K2Node_ComponentBoundEvent_129_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot1_K2Node_ComponentBoundEvent_129_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot2_K2Node_ComponentBoundEvent_138_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_EmoteSlot2_K2Node_ComponentBoundEvent_138_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot2_K2Node_ComponentBoundEvent_138_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot2_K2Node_ComponentBoundEvent_138_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot3_K2Node_ComponentBoundEvent_148_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_EmoteSlot3_K2Node_ComponentBoundEvent_148_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot3_K2Node_ComponentBoundEvent_148_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot3_K2Node_ComponentBoundEvent_148_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot4_K2Node_ComponentBoundEvent_159_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_EmoteSlot4_K2Node_ComponentBoundEvent_159_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot4_K2Node_ComponentBoundEvent_159_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot4_K2Node_ComponentBoundEvent_159_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Banner_K2Node_ComponentBoundEvent_302_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::BndEvt__Button_Banner_K2Node_ComponentBoundEvent_302_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Banner_K2Node_ComponentBoundEvent_302_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__Button_Banner_K2Node_ComponentBoundEvent_302_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerMesh_K2Node_ComponentBoundEvent_277_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerMesh_K2Node_ComponentBoundEvent_277_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerMesh_K2Node_ComponentBoundEvent_277_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerMesh_K2Node_ComponentBoundEvent_277_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBorderPattern_K2Node_ComponentBoundEvent_534_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerBorderPattern_K2Node_ComponentBoundEvent_534_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBorderPattern_K2Node_ComponentBoundEvent_534_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerBorderPattern_K2Node_ComponentBoundEvent_534_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerSigilPattern_K2Node_ComponentBoundEvent_579_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerSigilPattern_K2Node_ComponentBoundEvent_579_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerSigilPattern_K2Node_ComponentBoundEvent_579_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerSigilPattern_K2Node_ComponentBoundEvent_579_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerVFX_K2Node_ComponentBoundEvent_595_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerVFX_K2Node_ComponentBoundEvent_595_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerVFX_K2Node_ComponentBoundEvent_595_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerVFX_K2Node_ComponentBoundEvent_595_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerAnimation_K2Node_ComponentBoundEvent_612_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerAnimation_K2Node_ComponentBoundEvent_612_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerAnimation_K2Node_ComponentBoundEvent_612_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerAnimation_K2Node_ComponentBoundEvent_612_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBackgroundColor_K2Node_ComponentBoundEvent_630_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerBackgroundColor_K2Node_ComponentBoundEvent_630_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBackgroundColor_K2Node_ComponentBoundEvent_630_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerBackgroundColor_K2Node_ComponentBoundEvent_630_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBorderColor_K2Node_ComponentBoundEvent_649_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerBorderColor_K2Node_ComponentBoundEvent_649_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBorderColor_K2Node_ComponentBoundEvent_649_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerBorderColor_K2Node_ComponentBoundEvent_649_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerSigilColor_K2Node_ComponentBoundEvent_669_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::BndEvt__ComboBox_BannerSigilColor_K2Node_ComponentBoundEvent_669_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerSigilColor_K2Node_ComponentBoundEvent_669_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerSigilColor_K2Node_ComponentBoundEvent_669_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnPlayerLoadoutChanged
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugLoadoutScreen_C::OnPlayerLoadoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnPlayerLoadoutChanged");

	UBPW_DebugLoadoutScreen_C_OnPlayerLoadoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.ExecuteUbergraph_BPW_DebugLoadoutScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugLoadoutScreen_C::ExecuteUbergraph_BPW_DebugLoadoutScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.ExecuteUbergraph_BPW_DebugLoadoutScreen");

	UBPW_DebugLoadoutScreen_C_ExecuteUbergraph_BPW_DebugLoadoutScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
